#ifndef ENVIO_H
#define ENVIO_H

class Envio
{

protected:
    Envio(int peso, int distancia);

public:
    ~Envio();
    virtual float CalculoEnvio();

private:
    int peso;
    int distancia;
};

#endif