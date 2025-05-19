#pragma once
#include <iostream>
using namespace std;

class Point {
private:
    double x,y;

public:
    //CONSTRUCTOR
    Point(double x, double y);
    //GETTERS
    double get_X() const;
    double get_Y() const;
    //SETTERS
    void set_X(double newX);
    void set_Y(double newY);

    void showPoint();
};