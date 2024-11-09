#include <iostream>
#include <string>
#include "Person.h"

// Constructor
Person::Person(const std::string& _name, int _age):name{_name}, age{_age} {}

// Método para obtener el nombre
std::string Person::getName() const {
    return name;
}

// Método para establecer el nombre
void Person::setName(const std::string& _name) {
    name = _name;
}

// Método para obtener la edad
int Person::getAge() const {
    return age;
}

// Método para establecer la edad
void Person::setAge(int _age) {
    age = _age;
}

// Método para presentar a la persona
void Person::introduce() {
    std::cout << "Hello, my name is " << name << " and I'm " << age << std::endl;
}
