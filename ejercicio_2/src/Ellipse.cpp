#include "Ellipse.hpp"
#include <iostream>
using namespace std;

Ellipse::Ellipse(double x, double y, double a, double b): position(x,y), A(a), B(b) {
    if(a < 0 || b < 0) throw invalid_argument("Los semi-ejes deben ser positivos.");
}

Point Ellipse::get_position() const {return position;}

double Ellipse::get_SemiMajorAxis() const {return A;}

double Ellipse::get_MinorSemiAxis() const {return B;}

void Ellipse::set_position(const Point& newP) {position = newP;}

void Ellipse::set_SemiMajorAxis(double a){A = a;}

void Ellipse::set_MinorSemiAxis(double b){B = b;}

void Ellipse::showEllipse(){
    cout<<"\nPosition: ";
    position.showPoint();
    cout<<"\nSemi-major axis: "<< A;
    cout<<"\nMinor Semiaxis: "<< B <<endl;
}