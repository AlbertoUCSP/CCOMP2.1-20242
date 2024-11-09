#ifndef BASEPLUS_H
#define BASEPLUS_H
#include <string>
#include "CommissionEmployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee {
    public:
        BasePlusCommissionEmployee(const std::string&, const std::string&,
            const std::string&, double = 0.0, double = 0.0, double = 0.0);

        /* We add two new functions (set and get) for the base salary, wich is a new attribute of 
        this class "BaseCommissionEmploye"*/
        void setBaseSalary(double); 
        double getBaseSalary() const;

        /* Here we have function earnings again because the way of calculate the earning
        in each class is different. The same happends with toString because now We need to
        show the base salary */  
        double earnings() const; // calculate earnings
        std::string toString() const; // create string representation

    private:        
        double baseSalary; // This the new attribute to the class BaseCommissionEmployee
};

#endif