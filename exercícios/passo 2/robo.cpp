#include "robo.hpp"

Robo::Robo(std::string nome, double preco):
    nome(nome),
    preco(preco)
{
}

void Robo::adicionar_motor(Motor motor)
{
    this->motores.push_back(motor);
}

void Robo::adicionar_motor(const std::vector<Motor>& motores)
{
    this->motores.insert(this->motores.end(), motores.begin(), motores.end());
}