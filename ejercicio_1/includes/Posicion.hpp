#pragma once
#include <iostream>
#include <fstream>
#include "MedicionBase.hpp"
using namespace std;

class Posicion: public MedicionBase{
public:
    //ATRIBUTOS
    float latitud, longitud, altitud;
    //CONSTRUCTOR
    Posicion() = default;
    Posicion(float lat, float lon, float alt, float t);
    //METODOS PARA PODER COPIAR EL PUNTERO
    Posicion(const Posicion& other); //CONSTRUCTOR DE COPIA
    Posicion& operator=(const Posicion& other); //SOBRECARGA DE OPERADOR PARA COPIAR
    //SERIALIZACION
    void serializar(ofstream& out) const override;
    void deserializar(ifstream& in) override;
    
    void imprimir() override;
};