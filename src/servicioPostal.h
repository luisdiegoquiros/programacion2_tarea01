#ifndef SERVICIOPOSTAL_H
#define SERVICIOPOSTAL_H

#include "envio.h"
#include <string>

class ServicioPostal : public Envio
{
private:
    std::string clase;

public:
    ServicioPostal(int peso, int distancia, std::string clase);
    float CalculoEnvio();
};

#endif