#include <iostream>
#include "Inventory.h"
using namespace std;

Inventory::Inventory() : products{0} {};

void Inventory::addProduct(Product* product) {
    products.push_back(product);
}

void Inventory::removeProductById(int id) {
    Product *tmp {products[0]};
    for(int i{0}; i < products.size(); i++, tmp++) {
        if(tmp[i].ID == id) {
        }
    }
}
