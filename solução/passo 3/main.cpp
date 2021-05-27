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
    std::cout << "Comecando a competicao..." << std::endl;
    robo.andar_frente();
}

void finalizar_competicao(Robo& robo)
{
    robo.parar();
    std::cout << "Competicao finalizada!" << std::endl;
}

int main()
{
    std::cout << "Iniciando o programa..." << std::endl;

    Humanoide humanoide;
    std::cout << humanoide << std::endl;

    if (validar_robo(humanoide))
    {
        std::cout << "O Humanoide esta apto para competir!" << std::endl;
    }
    else
    {
        std::cout << "O Humanoide nao esta apto para competir!" << std::endl;
        return 1;
    }

    comecar_competicao(humanoide);
    finalizar_competicao(humanoide);

    return 0;
}