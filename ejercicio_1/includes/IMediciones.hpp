#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class IMediciones{
public:
    virtual void serializar(ofstream& out) const = 0;
    virtual void deserializar(ifstream& in) = 0;
    virtual ~IMediciones(){}
};