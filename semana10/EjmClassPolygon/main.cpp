#include <iostream>
#include "Polygon.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

void areasDeArray(Polygon *array[], int size) {
    for(int i{0}; i < size; i++) {
        cout <<  array[i]->area() << " "; // array apunta al 1er elemento y depues de array++ apuntara al elemento siguiente
                              // asi en cada iteracion llamara al metodo polimorfico area() para cada objeto
    }
}

int main() {

    // Creamos una arreglo de punteros tipo Polygon
    Polygon *array[] = {(new Rectangle(4,2)),( new Triangle(2,3))};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Calculando las areas de los objetos del arreglo: " << "\n";
    areasDeArray(array, size);

    for(int i{0}; i < size; i++) {
        delete array[i];
    }
    
}