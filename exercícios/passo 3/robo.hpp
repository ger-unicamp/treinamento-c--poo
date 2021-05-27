#pragma once
#include <string>
#include <iostream>
#include <vector>

#include "motor.hpp"
#include "validavel.hpp"

class Robo : public Validavel
{
    private:
        friend std::ostream& operator<<(std::ostream& strm, const Robo& robo);
    protected:
        std::string nome;
        double preco;
        std::vector<Motor> motores;
    public:
        Robo(std::string nome, double preco);
        void adicionar_motor(Motor motor);
        void adicionar_motor(const std::vector<Motor>& motores);
        virtual void andar_frente() = 0;
};