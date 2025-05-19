#pragma once
#include <iostream>
#include "Circle.hpp"
#include "Ellipse.hpp"
#include "Rectangle.hpp"
#include <type_traits>
using namespace std;
constexpr double PI = 3.14159;

template<typename T>
class ProcesadorFigura{
public:
    static double calcular_area(const T& figura){ //static ya que no se accede a ningun atributo y no es instanciada
        static_assert(is_same<T, void>::value, "ProcesadorFigura::calcular_area no existe implementación para este tipo");
        return 0;
    }
};

template<>
class ProcesadorFigura<Circle>{
public:
    static double calcular_area( const Circle& circle){
        return PI*circle.get_ratio()*circle.get_ratio();
    }
};

template<>
class ProcesadorFigura<Ellipse>{
public:
    static double calcular_area( const Ellipse& ellipse){
        return PI*ellipse.get_SemiMajorAxis()*ellipse.get_MinorSemiAxis();
    }
};

template<>
class ProcesadorFigura<Rectangle>{
public:
    static double calcular_area( const Rectangle& rectangle){
        return rectangle.get_width()*rectangle.get_length();
    }
};