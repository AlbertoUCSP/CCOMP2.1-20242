#ifndef PERRO_H
#define PERRO_H
#include "Animal.h"

class Perro:public Animal {
    private:
       std::string breed;
       int age;
    public:
       Perro(std::string, std::string, std::string, int);

        /* Aqui no estamos declarando otro metodo virtual, solo
        se declara en la clase base(Animal). Aqui lo que
        hacemos es sobreescribir el metodo virtual(polimorfismo)
        para que se comporte de manera diferente para objetos de la clase Perro(subclase)*/ 
        void hacerSonido() override; 
};




#endif