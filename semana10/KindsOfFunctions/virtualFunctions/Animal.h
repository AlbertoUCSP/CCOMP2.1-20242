#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

class Animal {
    protected:
       std::string name;
       std::string kind;
    public:
       Animal(std::string, std::string);

       virtual void hacerSonido(); // Declaramos un metodo virtual en mi clase base animal

};

#endif