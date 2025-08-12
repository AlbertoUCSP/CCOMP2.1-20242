#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <string>

class Product {
    protected:
       unsigned int ID;
       std::string name;
       float price;
    public:
       Product(unsigned int, std::string, float);
       virtual ~Product() = default; // Destructor virtual

       virtual void displayInfo() const;

       virtual Product* clone() const = 0; // Función virtual pura
};

#endif