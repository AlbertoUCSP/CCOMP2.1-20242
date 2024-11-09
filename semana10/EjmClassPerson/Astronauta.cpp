#include <iostream>
#include "Astronauta.h"

Astronauta::Astronauta(std::string _name, int _age, int _trips, float _costOfTheSuit):Person(_name,_age), 
trips{_trips}, costOfTheSuit{_costOfTheSuit} {}

int Astronauta::getTrips() const {
    return trips;
}

float Astronauta::getCostOfTheSuit() const {
    return costOfTheSuit;
}

void Astronauta::increaseTrips() {
    trips ++;
}

void Astronauta::introduce() {
    std::cout << "Hello, my name is: " << name << ", I'm " << age << " and the cost of my suit is " << costOfTheSuit << std::endl;
}


