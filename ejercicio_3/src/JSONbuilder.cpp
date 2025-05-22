#include "JSONbuilder.hpp"

void JSONbuilder::addInfo(const string& d){processedData.push_back(d);}

void JSONbuilder::buildJSON(ostream& out){
    out<<'{';
    for(size_t i = 0; i < processedData.size(); i++){
        out<< processedData[i];
        if(i < processedData.size()){
            out<<',';
        }
        out<<"\n";
    }
    out<<'}'<<endl;
}

void JSONbuilder::showJSON(){
    buildJSON(cout);
}