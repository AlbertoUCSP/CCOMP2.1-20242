#ifndef BYCICLE_H
#define BYCICLE_H
#include "CarbonFootPrint.h"
#include <string>

class Bicycle : public CarbonFootPrint {
    private:
       std::string color;
       std::string type;
    public:
       Bicycle(std::string, std::string);

       std::string getColor() const;
       void setColor(std::string);

       std::string getType() const;
       void setType(std::string);

       double getCarbonFootPrint() const override;

       void display() const override;

};

#endif