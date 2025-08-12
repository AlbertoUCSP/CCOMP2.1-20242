#ifndef ELECTRONIC_H
#define ELECTRONIC_H
#include "Product.h"
#include <iostream>


class Electronic : public Product {
    private:
       unsigned int warranty;
    public:
       Electronic(unsigned int, std::string, float, unsigned int);

       void displayInfo() const override;

       Product* clone() const override;
};

#endif