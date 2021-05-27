#include "robo.hpp"

int main()
{
    std::cout << "Iniciando o programa..." << std::endl;
    
    std::string nome;
    double preco;
    int quantidade_motores;

    std::cout << "Digite as informacoes do robo" << std::endl;
    std::cin >> nome >> preco >> quantidade_motores;

    Robo robo(nome, preco, quantidade_motores);

    return 0;
}