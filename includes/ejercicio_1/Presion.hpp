#pragma once
#include <iostream>
#include <fstream>
#include "MedicionBase.hpp"
using namespace std;

class Presion: public MedicionBase{
private: //preguntar
    float presionEstatica, presionDinamica;

public:
    //CONSTRUCTOR
    Presion(float p, float q, float t);
    //SERIALIZACION
    
    void imprimir() override;
};