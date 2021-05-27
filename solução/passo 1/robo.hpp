#include <string>
#include <iostream>

class Robo {
    private:
        std::string nome;
        double preco;
        int quantidade_motores;
    public:
        Robo(std::string nome, double preco, int quantidade_motores);
};