#include <iostream>
#include "Electronic.h"
using namespace std;

Electronic::Electronic(unsigned int _ID, string _name, float _price, unsigned int _warranty) : 
    Product(_ID, _name, _price), warranty{_warranty} {}

void Electronic::displayInfo() const {
    cout << "ELECTRONIC PRODUCT INFORMATION" << "\nID: " << ID << "\nName: " << name << "\nPrice: "
    << price << "\nWarranty: " << warranty << endl;
}
Product* Electronic::clone() const {
    return new Electronic(*this); // Crear una copia usando el constructor de copia.
}
