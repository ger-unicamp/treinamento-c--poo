#include "motor.hpp"

Motor::Motor(int velocidade_rotacao) :
    conectado(false),
    velocidade_rotacao(velocidade_rotacao),
    ativo(false)
{
}

bool Motor::conectar()
{
    this->conectado = true;
    return this->conectado;
}

bool Motor::desconectar()
{
    this->parar();
    this->conectado = false;
    return this->conectado;
}

void Motor::andar_com_velocidade(int velocidade_rotacao)
{
    this->velocidade_rotacao = velocidade_rotacao;
    this->ativar();
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
    std::cout << "Rodando por " << graus << " graus" << std::endl;
    int tempo = graus / this->velocidade_rotacao;
    this->andar_por_tempo(tempo);
}

bool Motor::parar()
{
    this->ativo = false;
    return true;
}

void Motor::ativar()
{
    this->ativo = true;
}