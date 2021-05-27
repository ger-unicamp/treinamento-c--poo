#include "robo.hpp"

Robo::Robo(std::string nome, double preco, int quantidade_motores) 
{
    this->nome = nome;
    this->preco = preco;
    this->quantidade_motores = quantidade_motores;
    std::cout << "Ola, sou o robo " << this->nome <<
        " meu preco foi de " << this->preco <<
        " e tenho " << this->quantidade_motores << " motores." << std::endl;
}