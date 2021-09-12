#ifndef ENVIO_H
#define ENVIO_H

class Envio
{

protected:
    Envio(int peso, int distancia);

public:
    ~Envio();
    virtual float CalculoEnvio() = 0;
    
    // Get y Set para peso
    int getPeso();
    void setPeso(int peso);

    // Get y Set para distancia
    int getDistancia();
    void setDistancia(int distancia); 

private:
    int peso;
    int distancia;
};

#endif