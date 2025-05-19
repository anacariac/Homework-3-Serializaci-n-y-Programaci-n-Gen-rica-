#pragma once
#include <iostream>
#include <fstream>
#include "MedicionBase.hpp"
using namespace std;

class Presion: public MedicionBase{
public:
    float presionEstatica, presionDinamica;
    //CONSTRUCTOR
    Presion(float p, float q, float t);
    //SERIALIZACION
    void serializar(ofstream& out) const override;
    void deserializar(ifstream& in) override;
    
    void imprimir() override;
};