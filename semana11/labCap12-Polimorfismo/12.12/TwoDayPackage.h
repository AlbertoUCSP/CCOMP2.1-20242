#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include <string>
#include "Package.h"
using namespace std;

class TwoDayPackage:public Package {
    private:
       float flatRate;
    public:
       TwoDayPackage(const string&, const string&, const string&, const string&, const string&, const string&, 
                  const string&, const string&, const string&, const string&, float, float, float);

        double calculateCost() const override;
};

#endif