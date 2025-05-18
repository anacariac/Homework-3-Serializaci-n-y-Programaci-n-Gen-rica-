#include "Rectangle.hpp"
#include <iostream>
using namespace std;

Rectangle::Rectangle(double x, double y, double w, double l): LeftVertex(x,y), width(w), length(l) {}

Point Rectangle::get_LeftVertex() const {return LeftVertex;}

double Rectangle::get_width() const {return width;}

double Rectangle::get_length() const {return length;}

void Rectangle::set_LeftVertex(const Point& newP) {LeftVertex = newP;}

void Rectangle::set_width(double w){width = w;}

void Rectangle::set_length(double l){length = l;}

void Rectangle::showRectangle(){
    cout<<"\nLeft Vertex: ";
    LeftVertex.showPoint();
    cout<<"\nWidth: "<< width;
    cout<<"\nLength: "<< length <<endl;
}