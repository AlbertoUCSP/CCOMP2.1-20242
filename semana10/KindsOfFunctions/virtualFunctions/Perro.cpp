#include <iostream>
#include "Perro.h"

Perro::Perro(std::string _name, std::string _kind, std::string _breed, int _age):Animal(_name, _kind), breed{_breed}, age{_age} {}

void Perro::hacerSonido() {
    std::cout << "El perro ladra"<<std::endl;
}

