#include "JSONbuilder.hpp"

void JSONbuilder::addInfo(const string& d){processedData.push_back(d);}

void JSONbuilder::buildJSON(ostream& out){
    out<<'{';
    for(size_t i = 0; i < processedData.size(); i++){
        out<< processedData[i];
        if(i < processedData.size() - 1){
            out<<',';
        }
        out<<"\n";
    }
    out<<'}'<<endl;
}

void JSONbuilder::showJSON(){
    buildJSON(cout); // llama al metodo buildJSON ya que le paso como argumento cout que permite imprimir por pantalla el JSON si es que no quiero escribir un archivo
}