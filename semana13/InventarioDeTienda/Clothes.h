#ifndef CLOTHES_H
#define CLOTHES_H
#include <iostream>
#include "Product.h"

class Clothes : public Product {
    private:
       std::string size;
    public:
       Clothes(unsigned int, std::string, float, std::string);

       void displayInfo() const override;

       Product* clone() const override;
};


#endif