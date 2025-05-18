#include "MedicionBase.hpp"
using namespace std;

MedicionBase::MedicionBase(float t): tiempoMedicion(make_unique<float>(t)) {}

MedicionBase::MedicionBase(const MedicionBase& other){tiempoMedicion = make_unique<float>(*other.tiempoMedicion);}

MedicionBase& MedicionBase::operator=(const MedicionBase& other){
    if(this != &other){
        tiempoMedicion = make_unique<float>(*other.tiempoMedicion);
    }
    return *this;
}

float MedicionBase::getTiempo(){return *tiempoMedicion;}

void MedicionBase::serializar(ofstream& out) const{
    out.write(reinterpret_cast<const char*>(tiempoMedicion.get()),sizeof(float)); // con .get() doy el raw pointer para poder reinterpretarlo
};

void MedicionBase::deserializar(ifstream& in){
    float tiempoDeserializado;
    in.read(reinterpret_cast<char*>(&tiempoDeserializado), sizeof(float));
    tiempoMedicion = make_unique<float>(tiempoDeserializado);
}
