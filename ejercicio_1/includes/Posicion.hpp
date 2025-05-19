#pragma once
#include <iostream>
#include <fstream>
#include "MedicionBase.hpp"
using namespace std;

class Posicion: public MedicionBase{
public:
    float latitud, longitud, altitud;
    //CONSTRUCTOR
    Posicion(float lat, float lon, float alt, float t);
    //SERIALIZACION
    void serializar(ofstream& out) const override;
    void deserializar(ifstream& in) override;
    
    void imprimir() override;
};