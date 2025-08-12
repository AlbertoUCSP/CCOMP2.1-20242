#ifndef INVENTARIO_H
#define INVENTARIO_H
#include "Product.h"
#include <vector>

class Inventory {
    private: 
       std::vector<Product*> products;
    public:
       Inventory();
       ~Inventory();

       void addProduct(Product*);

       void removeProductById(int);

};

#endif