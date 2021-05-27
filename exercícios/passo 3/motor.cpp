#include "motor.hpp"

Motor::Motor(int velocidade_rotacao) :
    conectado(false),
    velocidade_rotacao(velocidade_rotacao),
    ativo(false)
{
}

bool Motor::conectar()
{
}

bool Motor::desconectar()
{
}

void Motor::andar_com_velocidade(int velocidade_rotacao)
{
}

void Motor::andar_por_tempo(int tempo)
{
    std::cout << "Rodando por " << tempo << " milissegundos" << std::endl;
    this->ativar();
    std::this_thread::sleep_for(std::chrono::milliseconds(tempo));
    this->parar();
}

void Motor::rotacionar_g_graus(int graus)
{
}

bool Motor::parar()
{
}

void Motor::ativar()
{
}