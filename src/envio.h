#ifndef ENVIO_H
#define ENVIO_H

class Envio
{

protected:
    Envio(int peso, int distancia);

public:
    ~Envio();
    virtual float CalculoEnvio() = 0;
    
    // Get para peso
    int getPeso();

    // Get para distancia
    int getDistancia();

private:
    int peso;
    int distancia;
};

#endif