#include <iostream>
#include "Product.h"
using namespace std;

Product::Product(unsigned int _ID, string _name, float _price) : ID{_ID}, name{_name}, price{_price} {}

void Product::displayInfo() const {
    cout << "GENERAL INFORMATION" << "\nID: " << ID << "\nName: " << name << "\nPrice: " << price << endl;
}