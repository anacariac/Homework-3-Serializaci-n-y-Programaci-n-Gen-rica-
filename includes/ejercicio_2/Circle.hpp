#pragma once
#include <iostream>
#include "Point.hpp"
using namespace std;

class Circle{
private:
    Point position;
    double ratio;

public:
    //CONSTRUCTOR
    Circle(double x, double y, double r);
    //GETTERS
    Point get_position() const;
    double get_ratio() const;
    //SETTERS
    void set_position(const Point& newP);
    void set_ratio(double r);

    void showCircle();
};