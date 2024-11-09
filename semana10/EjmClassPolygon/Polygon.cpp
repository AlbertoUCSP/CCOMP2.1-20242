#include <iostream>
#include "Polygon.h"
using namespace std;

// Constructor de Polygon
Polygon::Polygon(int a, int b) : width{a}, height{b} {}

// Implementación de printArea, que llama a la función virtual pura area().
// Esta función asumirá que las clases derivadas implementan area().
void Polygon::printArea() {
    cout << this->area() << endl;
}
