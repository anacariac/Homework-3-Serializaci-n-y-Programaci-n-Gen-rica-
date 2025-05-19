#pragma once
#include <iostream>
#include <fstream>
#include "MedicionBase.hpp"
using namespace std;

class Posicion: public MedicionBase{
private: //preguntar
    float latitud, longitud, altitud;

public:
    //CONSTRUCTOR
    Posicion(float lat, float lon, float alt, float t);
    //SERIALIZACION
    void serializar(ofstream& out) const override;
    void deserializar(ifstream& in) override;
    
    void imprimir() override;
};