#pragma once
#include <chrono>
#include <thread>
#include <iostream>

class Motor
{
    private:
        bool conectado;
        int velocidade_rotacao; // graus por milissegundos
        bool ativo;
    public:
        Motor(int);
        bool conectar();
        bool desconectar();
        void andar_com_velocidade(int);
        void andar_por_tempo(int);
        void rotacionar_g_graus(int);
        bool parar();
    private:
        void ativar();
};