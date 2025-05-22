#include "Posicion.hpp"
using namespace std;

Posicion::Posicion(float lat, float lon, float alt, float t):  MedicionBase(t), latitud(lat), longitud(lon), altitud(alt) {}

Posicion::Posicion(const Posicion& other): MedicionBase(*other.tiempoMedicion), latitud(other.latitud) , longitud(other.longitud), altitud(other.altitud) {}

Posicion& Posicion::operator=(const Posicion& other){
    if(this != &other){
        this->latitud = other.latitud;
        this->longitud = other.longitud;
        this->altitud = other.altitud;
        this->tiempoMedicion = make_unique<float>(*other.tiempoMedicion);
    }
    return *this;
}

void Posicion::serializar(ofstream& out) const{
    MedicionBase::serializar(out);
    out.write(reinterpret_cast<const char*>(&latitud), sizeof(float));
    out.write(reinterpret_cast<const char*>(&longitud), sizeof(float));
    out.write(reinterpret_cast<const char*>(&altitud), sizeof(float));
}

void Posicion::deserializar(ifstream& in){
    MedicionBase::deserializar(in);
    in.read(reinterpret_cast<char*>(&latitud),sizeof(float));
    in.read(reinterpret_cast<char*>(&longitud),sizeof(float));
    in.read(reinterpret_cast<char*>(&altitud),sizeof(float));
}

void Posicion::imprimir(){
    cout<<"\nLatitud: "<<latitud<<"\nLongitud: "<<longitud<<"\nAltitud: "<<altitud<<"\nTiempo de Medición: "<<MedicionBase::getTiempo()<<endl;
}