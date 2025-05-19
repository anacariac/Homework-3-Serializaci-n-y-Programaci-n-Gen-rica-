#pragma once
#include <iostream>
#include <fstream>
#include <memory>
#include "IMediciones.hpp"
using namespace std;

class MedicionBase: public IMediciones{
protected:
    unique_ptr<float> tiempoMedicion;

public:
    //CONSTRUCTOR
    MedicionBase(float t);
    //METODOS PARA PODER COPIAR EL PUNTERO
    MedicionBase(const MedicionBase& other); //CONSTRUCTOR DE COPIA
    MedicionBase& operator=(const MedicionBase& other); //SOBRECARGA DE OPERADOR PARA COPIAR
    //GETTER
    float getTiempo();

    void serializar(ofstream& out) const override;
    void deserializar(ifstream& in) override;
    virtual void imprimir() = 0;
};