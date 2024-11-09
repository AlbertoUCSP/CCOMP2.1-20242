#ifndef CAR_H
#define CAR_H
#include "CarbonFootPrint.h"
#include <string>

class Car:public CarbonFootPrint {
    private:
       std::string brand;
       std::string model;
       float price;
       double fuelConsumed;
    public:
       Car(std::string, std::string, float, double);

       std::string getBrand() const;
       void setBrand(std::string);

       std::string getModel() const;
       void setModel(std::string);

       float getPrice() const;
       void setPrice(float);

       double getFuelConsumed() const;
       void setFuelCosumed(double);

       double getCarbonFootPrint() const override;

       void display() const override ;
};


#endif