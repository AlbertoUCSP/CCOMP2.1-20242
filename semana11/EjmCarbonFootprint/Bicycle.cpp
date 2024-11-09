#include <iostream>
#include "Bicycle.h"
using namespace std;

Bicycle::Bicycle(string _color, string _type):color(_color), type(_type) {}

string Bicycle::getColor() const {
    return color;
}

void Bicycle::setColor(string c) {
    color = c;
}

string Bicycle::getType() const {
    return type;
}

void Bicycle::setType(string t) {
    type = t;
}

double Bicycle::getCarbonFootPrint() const {
    return 0.0;
}

void Bicycle::display() const {
    cout << "BICYCLE INFORMATION" << "\nColor: " << color << "\nType: " << type 
    << "\nCarbon foot: " << getCarbonFootPrint() << endl;
}