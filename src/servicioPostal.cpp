#include "servicioPostal.h"
#include <string>

ServicioPostal::ServicioPostal(int peso, int distancia, std::string clase) : Envio(peso, distancia)
{
    this->clase = clase;
}

float ServicioPostal::CalculoEnvio()
{
    float total = 0;
    if (clase == "Primera")
    {
        if (this->getPeso() <= 3){
            total = this->getDistancia()*0.195;
        }else if (this->getPeso() >= 4 && this->getPeso() <= 8) {
            total = this->getDistancia()*0.450;
        }else if (this->getPeso() >= 9){
            total = this->getDistancia()*0.500;
        }
    }
    else if (clase == "Segunda")
    {
        if (this->getPeso() <= 3){
            total = this->getDistancia()*0.0195;
        }else if (this->getPeso() >= 4 && this->getPeso() <= 8) {
            total = this->getDistancia()*0.0450;
        }else if (this->getPeso() >= 9){
            total = this->getDistancia()*0.0500;
        }
    }
    else if (clase == "Tercera")
    {
        if (this->getPeso() <= 3){
            total = this->getDistancia()*0.500;
        }else if (this->getPeso() >= 4 && this->getPeso() <= 8) {
            total = this->getDistancia()*0.0500;
        }else if (this->getPeso() >= 9){
            total = this->getDistancia()*0.0170;
        }
    }
    return total;
}