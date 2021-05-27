#pragma once
#include <vector>

#include "robo.hpp"
#include "motor.hpp"

class Humanoide final : public Robo
{
    private:
        std::vector<Motor*> perna_direita;
        std::vector<Motor*> perna_esquerda;
        std::vector<Motor*> braco_direito;
        std::vector<Motor*> braco_esquerdo;
    public:
        Humanoide();
        void andar_frente() override;
        bool validar() const;
    private:
        void mover_braco_esquerdo(int graus);
        void mover_braco_direito(int graus);
        void mover_perna_esquerda(int graus);
        void mover_perna_direita(int graus);
};