#include "envio.h"

Envio::Envio(int peso, int distancia)
{
    this->peso;
    this->distancia;
}

Envio::~Envio()
{
}

int Envio::getPeso()
{
    return this->peso;
}
void Envio::setPeso(int peso)
{
    this->peso = peso;
}

int Envio::getDistancia()
{
    return this->distancia;
}

void Envio::setDistancia(int distancia)
{
    this->distancia = distancia;
}