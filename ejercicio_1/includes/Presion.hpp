#pragma once
#include <iostream>
#include <fstream>
#include "MedicionBase.hpp"
using namespace std;

class Presion: public MedicionBase{
public:
    //ATRIBUTOS
    float presionEstatica, presionDinamica;
    //CONSTRUCTOR
    Presion() = default;
    Presion(float p, float q, float t);
    //METODOS PARA PODER COPIAR EL PUNTERO
    Presion(const Presion& other); //CONSTRUCTOR DE COPIA
    Presion& operator=(const Presion& other); //SOBRECARGA DE OPERADOR PARA COPIAR
    //SERIALIZACION
    void serializar(ofstream& out) const override;
    void deserializar(ifstream& in) override;
    
    void imprimir() override;
};