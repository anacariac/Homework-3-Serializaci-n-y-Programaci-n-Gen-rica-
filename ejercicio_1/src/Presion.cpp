#include "Presion.hpp"
using namespace std;

Presion::Presion(float p, float q, float t):  MedicionBase(t), presionEstatica(p), presionDinamica(q) {}

Presion::Presion(const Presion& other): MedicionBase(*other.tiempoMedicion), presionEstatica(other.presionEstatica), presionDinamica(other.presionDinamica) {}

Presion& Presion::operator=(const Presion& other){
    if(this != &other){
        this->presionEstatica = other.presionEstatica;
        this->presionDinamica = other.presionDinamica;
        this->tiempoMedicion = make_unique<float>(*other.tiempoMedicion);
    }
    return *this;
}

void Presion::serializar(ofstream& out) const{
    MedicionBase::serializar(out);
    out.write(reinterpret_cast<const char*>(&presionEstatica), sizeof(float));
    out.write(reinterpret_cast<const char*>(&presionDinamica), sizeof(float));
}

void Presion::deserializar(ifstream& in){
    MedicionBase::deserializar(in);
    in.read(reinterpret_cast<char*>(&presionEstatica),sizeof(float));
    in.read(reinterpret_cast<char*>(&presionDinamica),sizeof(float));
}

void Presion::imprimir(){
    cout<<"\nPresión Estática: "<<presionEstatica<<"\nPresión Dinámica: "<<presionDinamica<<"\nTiempo de Medición: "<<MedicionBase::getTiempo()<<endl;
}