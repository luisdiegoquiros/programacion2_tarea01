#ifndef UNIT_TEST

#include <iostream>
#include <vector>

#include "envio.h"
#include "servicioPostal.h"
#include "fedex.h"

int main()
{
    Fedex *fedex1 = new Fedex{2, 100};   // costo 20
    Fedex *fedex2 = new Fedex{10, 1000}; // costo 28
    Fedex *fedex3 = new Fedex{3, 1897};  // costo 25
    Fedex *fedex4 = new Fedex{95, 253};  // costo 23

    ServicioPostal *servicio_postal1 = new ServicioPostal{1, 10, "Primera"};  // costo 1.95
    ServicioPostal *servicio_postal2 = new ServicioPostal{7, 22, "Primera"};  // costo 9.9
    ServicioPostal *servicio_postal3 = new ServicioPostal{25, 8, "Primera"};  // costo 4
    ServicioPostal *servicio_postal4 = new ServicioPostal{2, 55, "Segunda"};  // costo 1.0725
    ServicioPostal *servicio_postal5 = new ServicioPostal{6, 4, "Segunda"};   //costo 0.18
    ServicioPostal *servicio_postal6 = new ServicioPostal{33, 78, "Segunda"}; //costo 3.9
    ServicioPostal *servicio_postal7 = new ServicioPostal{3, 47, "Tercera"};  //costo 0.705
    ServicioPostal *servicio_postal8 = new ServicioPostal{8, 17, "Tercera"};  //costo 0.272
    ServicioPostal *servicio_postal9 = new ServicioPostal{86, 99, "Tercera"}; //costo 1.683
    //Total: 119.6625
    
    std::vector<Envio *> arregloEnvios;

    arregloEnvios.push_back(fedex1);
    arregloEnvios.push_back(fedex2);
    arregloEnvios.push_back(fedex3);
    arregloEnvios.push_back(fedex4);
    arregloEnvios.push_back(servicio_postal1);
    arregloEnvios.push_back(servicio_postal2);
    arregloEnvios.push_back(servicio_postal3);
    arregloEnvios.push_back(servicio_postal4);
    arregloEnvios.push_back(servicio_postal5);
    arregloEnvios.push_back(servicio_postal6);
    arregloEnvios.push_back(servicio_postal7);
    arregloEnvios.push_back(servicio_postal8);
    arregloEnvios.push_back(servicio_postal9);

    float totalMontoEnvios = 0;
    for (Envio *envio : arregloEnvios)
    {
        totalMontoEnvios += envio->CalculoEnvio();
    }
    std::cout << "El monto total de los envíos es de " << totalMontoEnvios << std::endl;

    // Limpiar memoria
    delete fedex1;
    delete fedex2;
    delete fedex3;
    delete fedex4;
    delete servicio_postal1;
    delete servicio_postal2;
    delete servicio_postal3;
    delete servicio_postal4;
    delete servicio_postal5;
    delete servicio_postal6;
    delete servicio_postal7;
    delete servicio_postal8;
    delete servicio_postal9;

    return 0;
}

#endif