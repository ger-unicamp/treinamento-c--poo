#include "robo.hpp"
#include "humanoide.hpp"
#include "motor.hpp"

std::ostream& operator<<(std::ostream& strm, const Robo& robo)
{
    return strm << "Robo(" << 
        "nome: " << robo.nome << ", " << 
        "preco: " << robo.preco << ", " <<
        "quantidade de motores: " << robo.motores.size() << ")" <<
        std::endl;
}

bool validar_robo(const Validavel& robo)
{
    return robo.validar();
}

void comecar_competicao(Robo& robo)
{
    robo.andar_frente();
}

int main()
{
    std::cout << "Iniciando o programa..." << std::endl;

    Humanoide robo;
    std::cout << robo << std::endl;

    if (validar_robo(robo))
    {
        std::cout << "Robo esta apto para competir!" << std::endl;
    }
    else
    {
        std::cout << "Robo nao esta apto para competir!" << std::endl;
        return 1;
    }

    comecar_competicao(robo);

    return 0;
}