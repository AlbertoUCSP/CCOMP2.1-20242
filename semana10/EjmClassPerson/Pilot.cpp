#include <iostream>
#include "Pilot.h"

Pilot::Pilot(std::string _name, int _age, int _hoursOfFly, int _yearsInService):Person(_name, _age), 
hoursOfFly{_hoursOfFly}, yearsInService{_yearsInService} {}

int Pilot::getHoursOfFly() const {
    return hoursOfFly;
}
void Pilot::setHoursOfFly(int _hoursOfFly) {
    hoursOfFly = _hoursOfFly;
}

int Pilot::getYearsInService() const {
    return yearsInService;
}
void Pilot::setYearsInService(int _yearsInService) {
    yearsInService = _yearsInService;
}

void Pilot::introduce() {
    std::cout << "Hello, my name is " << name << " I'm " << age << ". I have been pilot for " << yearsInService 
    << " and I have " << hoursOfFly << " hours of fly" << std::endl;
}