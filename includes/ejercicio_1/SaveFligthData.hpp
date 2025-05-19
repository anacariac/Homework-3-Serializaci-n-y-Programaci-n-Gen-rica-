#pragma once
#include <iostream>
#include <fstream>
#include "Presion.hpp"
#include "Posicion.hpp"
using namespace std;

class SaveFlightData{
private:
    Posicion posicion;
    Presion presion;

public: 
    //CONSTRUCTOR
    SaveFlightData(const Posicion& p, const Presion& q);
    //SERIALIZACION
    void serializar(ofstream& out) const;
    void deserializar(ifstream& in);

    void imprimir();

};