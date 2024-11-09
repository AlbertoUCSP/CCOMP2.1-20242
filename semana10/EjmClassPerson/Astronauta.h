#ifndef ASTRONAUTA_H
#define ASTRONAUTA_H
#include "Person.h"

class Astronauta:public Person {
    private:
       int trips;
       float costOfTheSuit;
    public:
       Astronauta(std::string, int, int, float);

       int getTrips() const;

       float getCostOfTheSuit() const;

       void increaseTrips();

       void introduce() override; // This is a virtual funtion



};


#endif