#pragma once
#include <iostream>
#include <fstream>
#include "Presion.hpp"
#include "Posicion.hpp"
using namespace std;

class SaveFlightData{
public: 
    //ATRIBUTOS
    Posicion posicion;
    Presion presion;
    //CONSTRUCTOR
    SaveFlightData() = default;
    SaveFlightData(const Posicion& p, const Presion& q);
    //SERIALIZACION
    void serializar(ofstream& out) const;
    void deserializar(ifstream& in);

    void imprimir();

};