#include <iostream>
#include "Building.h"
using namespace std;

Building::Building(string _company, int _floors, double _ec):company(_company), energyConsumption(_ec) {
    setFloors(_floors);
}

string Building::getCompany() const {
    return company;
}

void Building::setCompany(string c) {
    company = c;
}

int Building::getFloors() const {
    return floors;
}

void Building::setFloors(int f) {
    while(f <= 0) {
        cout << "Invalid number of floors, enter a new number of floors: ";
        cin >> f;
    }
    floors = f;
}

double Building::getEnergyConsumption() const {
    return energyConsumption;
} 

void Building::setEnergyConsumption(double ec) {
    energyConsumption = ec;
}

double Building::getCarbonFootPrint() const {
    return energyConsumption * 0.92;
}

void Building::display() const {
    cout << "BUILDING INFORMATION" << "\nCompany: " <<  company << "\nNumber of floors: " << floors 
    << "Enery Consumption: " << energyConsumption << "\nCarbon foot: " << getCarbonFootPrint() << endl;
}