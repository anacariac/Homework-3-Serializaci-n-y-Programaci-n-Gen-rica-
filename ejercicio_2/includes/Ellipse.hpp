#pragma once
#include <iostream>
#include "Point.hpp"
using namespace std;

class Ellipse{
private:
    Point position;
    double A;
    double B;

public:
    //CONSTRUCTOR
    Ellipse(double x, double y, double a, double b);
    //GETTERS
    Point get_position() const;
    double get_SemiMajorAxis() const;
    double get_MinorSemiAxis() const;
    //SETTERS
    void set_position(const Point& newP);
    void set_SemiMajorAxis(double a);
    void set_MinorSemiAxis(double b);

    void showEllipse();
};