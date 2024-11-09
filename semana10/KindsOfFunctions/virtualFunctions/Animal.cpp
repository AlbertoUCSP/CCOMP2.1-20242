#include <iostream>
#include "Animal.h"

Animal::Animal(std::string _name, std::string _kind) {}

// Implementamos el metodo virtual pero solo para clase Animal(clase base)
void Animal::hacerSonido() {
    std::cout << "El animal hace un sonido" << std::endl;
}