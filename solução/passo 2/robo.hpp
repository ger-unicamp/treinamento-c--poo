#pragma once
#include <string>
#include <iostream>
#include <vector>

#include "motor.hpp"

class Robo {
    private:
        std::string nome;
        double preco;
        std::vector<Motor> motores;
        friend std::ostream& operator<<(std::ostream& strm, const Robo& robo);
    public:
        Robo(std::string nome, double preco);
        void adicionar_motor(Motor motor);
        void adicionar_motor(const std::vector<Motor>& motores);
};