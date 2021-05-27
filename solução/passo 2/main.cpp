#include "robo.hpp"

std::ostream& operator<<(std::ostream& strm, const Robo& robo)
{
    return strm << "Robo(" << 
        "nome: " << robo.nome << ", " << 
        "preco: " << robo.preco << ", " <<
        "quantidade de motores: " << robo.motores.size() << ")" <<
        std::endl;
}

int main()
{
    std::cout << "Iniciando o programa..." << std::endl;
    
    std::string nome;
    double preco;

    std::cout << "Digite as informacoes do robo" << std::endl;
    std::cin >> nome >> preco;

    Robo robo(nome, preco);

    Motor motor(10);
    std::vector<Motor> motores;
    for (int i = 0; i < 5; i++) {
        motores.push_back(Motor(10));
    }

    // motor+motor;

    robo.adicionar_motor(motor);
    robo.adicionar_motor(motores);

    motor.rotacionar_g_graus(10000);

    std::cout << robo << std::endl;

    return 0;
}