#include "fedex.h"
#include <string>

Fedex::Fedex(int peso, int distancia) : Envio(peso, distancia)
{
}

float Fedex::CalculoEnvio()
{
    float total = 20;

    if (this->getDistancia() > 500)
    {
        total = total + 5;
    }
    if (this->getPeso() > 4)
    {
        total = total + 3;
    }

    return total;
}