#include "Point.hpp"
#include <iostream>
using namespace std;

Point::Point(double x, double y): x(x), y(y) {}

double Point::get_X() const {return x;}

double Point::get_Y() const{return y;}

void Point::set_X(double newX){x = newX;}

void Point::set_Y(double newY){y = newY;}

void Point::showPoint(){
    cout<<'('<< x <<", "<< y <<')'<<endl; 
}