#include <iostream>
#include "Car.h"
using namespace std;

Car::Car(string _brand, string _model, float _price, double _fuel):brand(_brand), model(_model), fuelConsumed(_fuel) {
    setPrice(_price);
}

string Car::getBrand() const {
    return brand;
}

void Car::setBrand(string b) {
    brand = b;
}

string Car::getModel() const {
    return model;
}

void Car::setModel(string m) {
    model = m;
}

float Car::getPrice() const {
    return price;
}

void Car::setPrice(float p) {
    while(p <= 0) {
        cout << "Invalid price, enter a new price: ";
        cin >> p;
    }
    price = p;
}

double Car::getFuelConsumed() const {
    return fuelConsumed;
}

void Car::setFuelCosumed(double f) {
    fuelConsumed = f;
}

double Car::getCarbonFootPrint() const {
    return fuelConsumed * 2.31;
}

void Car::display() const {
    cout << "CAR INFORMATION" << "\nBrand: " << brand << "\nModel: " << model << "\nPrice: " << price
    << "\nFuel consumed: " << fuelConsumed << "\nCarbon foot: " << getCarbonFootPrint() << endl;
}