#ifndef GATO_H
#define GATO_H
#include "Animal.h"

class Gato:public Animal {
    private:
       std::string color;
    public:
       Gato(std::string, std::string, std::string);

        /* Aqui no estamos declarando otro metodo virtual, solo
        se declara en la clase base(Animal). Aqui lo que
        hacemos es sobreescribir el metodo virtual(polimorfismo)
        para que se comporte de manera diferente para objetos de la clase GATO(subclase)*/ 
        void hacerSonido() override; 
};




#endif