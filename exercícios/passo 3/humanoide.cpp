#include "humanoide.hpp"

Humanoide::Humanoide(): 
    Robo("Humanoide", 4000.0)
{
    for(int i = 0; i < 10; i++)
    {
        this->motores.push_back(Motor(10));
    }

    separar_motores(0, 2, this->braco_direito);
    separar_motores(2, 4, this->braco_esquerdo);
    separar_motores(4, 7, this->perna_direita);
    separar_motores(7, 10, this->perna_esquerda);
    std::cout << "Humanoide criado!" << std::endl;
}

void Humanoide::separar_motores(int begin, int end, std::vector<Motor*>& v)
{
    for (int i = begin; i < end; i++)
    {
        v.push_back(&this->motores[i]);
    }
}

void Humanoide::andar_frente()
{
    std::cout << "Andando para frente" << std::endl;
    mover_braco_direito(4);
    mover_perna_esquerda(4);
    mover_braco_esquerdo(4);
    mover_perna_direita(4);
}

void Humanoide::mover_braco_esquerdo(int graus)
{
    std::cout << "Movendo braco esquerdo" << std::endl;
    this->braco_esquerdo[0]->rotacionar_g_graus(graus/2);
    this->braco_esquerdo[1]->rotacionar_g_graus(graus/4);
    this->braco_esquerdo[1]->rotacionar_g_graus(-graus/4);
    this->braco_esquerdo[0]->rotacionar_g_graus(-graus/2);
}

void Humanoide::mover_braco_direito(int graus)
{
    std::cout << "Movendo braco direito" << std::endl;
    this->braco_direito[0]->rotacionar_g_graus(graus/2);
    this->braco_direito[1]->rotacionar_g_graus(graus/4);
    this->braco_direito[1]->rotacionar_g_graus(-graus/4);
    this->braco_direito[0]->rotacionar_g_graus(-graus/2);
}

void Humanoide::mover_perna_esquerda(int graus)
{
    std::cout << "Movendo perna esquerda" << std::endl;
    this->perna_esquerda[0]->rotacionar_g_graus(graus);
    this->perna_esquerda[1]->rotacionar_g_graus(-graus/2);
    this->perna_esquerda[2]->rotacionar_g_graus(-graus/4);
    this->perna_esquerda[2]->rotacionar_g_graus(+graus/4);
    this->perna_esquerda[1]->rotacionar_g_graus(+graus/2);
    this->perna_esquerda[0]->rotacionar_g_graus(graus);
}

void Humanoide::mover_perna_direita(int graus)
{
    std::cout << "Movendo perna direita" << std::endl;
    this->perna_direita[0]->rotacionar_g_graus(graus);
    this->perna_direita[1]->rotacionar_g_graus(-graus/2);
    this->perna_direita[2]->rotacionar_g_graus(-graus/4);
    this->perna_direita[2]->rotacionar_g_graus(+graus/4);
    this->perna_direita[1]->rotacionar_g_graus(+graus/2);
    this->perna_direita[0]->rotacionar_g_graus(graus);
}

bool Humanoide::validar() const
{
    return this->nome.compare("Humanoide") == 0 &&
        this->preco == 4000.0 &&
        this->motores.size() == 10;
}