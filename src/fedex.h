#ifndef FEDEX_H
#define FEDEX_H

#include "envio.h"
#include <string>

class Fedex : public Envio
{

public:
    Fedex(int peso, int distancia);
    float CalculoEnvio();
};

#endif