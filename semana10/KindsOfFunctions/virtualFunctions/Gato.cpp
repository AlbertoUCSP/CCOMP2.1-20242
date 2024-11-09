#include <iostream>
#include "Gato.h"

Gato::Gato(std::string _name, std::string _kind, std::string _color):Animal(_name,_kind), color{_color} {}

void Gato::hacerSonido() {
    std::cout << "El gato maulla" << std::endl;
}