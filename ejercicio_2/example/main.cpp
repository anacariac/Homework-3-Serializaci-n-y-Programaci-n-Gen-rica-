#include <iostream>
#include "Circle.hpp"
#include "Ellipse.hpp"
#include "Rectangle.hpp"
#include "Point.hpp"
#include "ProcesadorFigura.hpp"
using namespace std;

int main() {
    try{
        // Crear figuras
        Circle circle(1.0, 2.0, 3.0);  // centro en (1,2), radio 3
        Ellipse ellipse(0.0, 0.0, 5.0, 2.0); // centro en (0,0), semi-ejes 5 y 2
        Rectangle rectangle(2.0, 3.0, 4.0, 5.0); // esquina en (2,3), ancho 4, largo 5

        cout<<"Figures: ";
        cout<<"\nCircle";
        circle.showCircle();
        cout<<"\nEllipse";
        ellipse.showEllipse();
        cout<<"\nRectangle";
        rectangle.showRectangle();

        // Calcular áreas con ProcesadorFigura<T>::calcular_area
        double area_circle = ProcesadorFigura<Circle>::calcular_area(circle);
        double area_ellipse = ProcesadorFigura<Ellipse>::calcular_area(ellipse);
        double area_rectangle = ProcesadorFigura<Rectangle>::calcular_area(rectangle);

        // Mostrar resultados
        cout << "\nÁrea del círculo: " << area_circle << endl;
        cout << "Área de la elipse: " << area_ellipse << endl;
        cout << "Área del rectángulo: " << area_rectangle << endl;
        
    }catch(const invalid_argument& e){
        cerr<<"Error al crear figura: "<<e.what()<<endl;
        return 1;
    }

    cout<<"\nFin del programa!"<<endl;

    return 0;
}
