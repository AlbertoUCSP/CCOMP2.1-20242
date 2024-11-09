#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include "Package.h"

class OverNightPackage:public Package {
    private:
       float flatRateNextDay;
    public:
       OverNightPackage(const string&, const string&, const string&, const string&, const string&, 
       const string&, const string&, const string&, const string&, const string&, float, float, float);

       double calculateCost() const override;


};

#endif