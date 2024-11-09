#include <iostream>
#include "Animal.h"
#include "Perro.h"
#include "Gato.h"
using namespace std;

// Función que realiza downcasting para verificar el tipo de Animal
void downcasting(Animal *ptr) { // Recibe un puntero de tipo Animal
    Perro *perroPtr = dynamic_cast<Perro*>(ptr); // Intenta convertir el puntero a tipo Perro usando downcasting

    if (perroPtr) { // Verifica si el downcasting tuvo éxito
        perroPtr->hacerSonido(); // Llama al método hacerSonido() específico de Perro
    } else {
        cout << "Downcasting fallido" << endl; // Si el puntero no apunta a un Perro, muestra un mensaje de error
    }
}

int main() {
    // Creamos un puntero de tipo Animal que apunta a un objeto de tipo Perro
    Animal *animalPtr = new Perro("Perro", "Mamifero", "Juan", 4);

    // Llamamos a la función downcasting para determinar el tipo real de animalPtr
    downcasting(animalPtr);

    // Liberamos la memoria asignada dinámicamente para evitar fugas de memoria
    delete animalPtr;
    return 0;
}
