#include <iostream>
#include "Clothes.h"
using namespace std;

Clothes::Clothes(unsigned int _ID, string _name, float _price, string _size) : 
    Product(_ID, _name, _price), size{_size} {}

void Clothes::displayInfo() const {
    cout << "CLOTHES PRODUCT INFORMATION" << "\nID: " << ID << "\nName: " << name << "\nPrice: "
    << price << "\nSize: " << size << endl;
}
Product* Clothes::clone() {
    return new Clothes(*this);
}