#ifndef BUILDING_H
#define BUILDING_H
#include "CarbonFootPrint.h"
#include <string>

class Building : public CarbonFootPrint {
    private:
       std::string company;
       int floors;
       double energyConsumption;
    public:
       Building(std::string, int, double);

       std::string getCompany() const;
       void setCompany(std::string);

       int getFloors() const;
       void setFloors(int);

       double getEnergyConsumption() const;
       void setEnergyConsumption(double);

       double getCarbonFootPrint() const override;

       void display() const override;
};



#endif