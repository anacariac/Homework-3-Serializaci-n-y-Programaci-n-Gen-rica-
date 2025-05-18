#include "Circle.hpp"
#include <iostream>
using namespace std;

Circle::Circle(double x, double y, double r) : position(x,y) , ratio(r) {}

Point Circle::get_position() const {return position;}

double Circle::get_ratio() const {return ratio;}

void Circle::set_position(const Point& newP) {position = newP;}

void Circle::set_ratio(double r){ratio = r;}

void Circle::showCircle(){
    cout<<"\nPosition: ";
    position.showPoint();
    cout<<"\nRatio: "<< ratio<<endl;
}