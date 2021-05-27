#include "humanoide.hpp"

Humanoide::Humanoide(): 
    Robo("Humanoide", 4000.0)
{
}

void Humanoide::andar_frente()
{
}

void Humanoide::mover_braco_esquerdo(int graus)
{
}

void Humanoide::mover_braco_direito(int graus)
{
}

void Humanoide::mover_perna_esquerda(int graus)
{
}

void Humanoide::mover_perna_direita(int graus)
{
}

bool Humanoide::validar() const
{
    return this->nome.compare("Humanoide") == 0 &&
        this->preco == 4000.0 &&
        this->motores.size() == 10;
}