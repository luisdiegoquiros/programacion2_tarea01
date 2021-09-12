#include "envio.h"

Envio::Envio(int peso, int distancia)
{
    this->peso = peso;
    this->distancia = distancia;
}

Envio::~Envio()
{
}

int Envio::getPeso()
{
    return this->peso;
}

int Envio::getDistancia()
{
    return this->distancia;
}
