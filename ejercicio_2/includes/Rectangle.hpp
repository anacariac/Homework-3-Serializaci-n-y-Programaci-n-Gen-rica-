#pragma once
#include <iostream>
#include "Point.hpp"
using namespace std;

class Rectangle{
private:
    Point LeftVertex;
    double width;
    double length;

public:
    //CONSTRUCTOR
    Rectangle(double x, double y, double w, double l);
    //GETTERS
    Point get_LeftVertex() const;
    double get_width() const;
    double get_length() const;
    //SETTERS
    void set_LeftVertex(const Point& newP);
    void set_width(double w);
    void set_length(double l);

    void showRectangle();
};