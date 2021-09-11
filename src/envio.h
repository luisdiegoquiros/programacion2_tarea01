#ifndef ENVIO_H
#define ENVIO_H

class Envio {
    
    public:
    Envio(int peso, int distancia);
    ~Envio();
    virtual float CalculoEnvio();


    private:
    int peso;
    int distancia;
};

#endif