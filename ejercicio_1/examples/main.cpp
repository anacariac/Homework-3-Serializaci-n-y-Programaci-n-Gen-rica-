#include <iostream>
#include <fstream>
#include "Posicion.hpp"
#include "Presion.hpp"
#include "SaveFlightData.hpp"

int main() {
    // Crear objetos originales
    Posicion posicion(-34.6f, -58.4f, 950.0f, 5.3f);
    Presion presion(101.3f, 5.8f, 6.1f);

    SaveFlightData original(posicion, presion);

    std::cout << "=== Objeto ORIGINAL ===" << std::endl;
    original.imprimir();

    // Serializar en archivo
    std::ofstream outFile("datos.txt");
    if (!outFile) {
        std::cerr << "Error al abrir archivo para escribir." << std::endl;
        return 1;
    }
    original.serializar(outFile);
    outFile.close();

    // Deserializar en un nuevo objeto
    SaveFlightData copia;  // usa el constructor por defecto
    std::ifstream inFile("datos.txt");
    if (!inFile) {
        std::cerr << "Error al abrir archivo para leer." << std::endl;
        return 1;
    }
    copia.deserializar(inFile);
    inFile.close();

    std::cout << "\n=== Objeto DESERIALIZADO ===" << std::endl;
    copia.imprimir();

    return 0;
}
