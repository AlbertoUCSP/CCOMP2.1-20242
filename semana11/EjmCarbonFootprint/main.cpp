#include <iostream>
#include <vector>
#include "Building.h"
#include "Car.h"
#include "Bicycle.h"
using namespace std;

int main() {
    Building build("Cinemark", 4, 10.5);
    Car car("Nissan", "Skyline", 13999.99, 6);
    Bicycle bicycle("Red", "Urban");

    vector<CarbonFootPrint*> carbonFootPrints{&build, &car, &bicycle};

    // Ejemplo downcast
    CarbonFootPrint *carbonPtr = new Car("Toyota", "Supra", 12300, 10);
    Car *carPtr = dynamic_cast<Car*>(carbonPtr);

    cout << carPtr->getModel(); // Ahora puedo acceder a las funciones miembro unicas de la clase derivada Car

    // Ejemplo upcast
    carbonPtr = carPtr;
    carbonPtr->display();

    for(int i{0}; i < carbonFootPrints.size(); i++) {
        carbonFootPrints[i] -> display();
    }

    delete carbonPtr;
}