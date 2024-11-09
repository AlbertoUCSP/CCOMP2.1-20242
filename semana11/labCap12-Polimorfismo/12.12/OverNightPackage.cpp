#include <iostream>
#include <stdexcept>
#include "OvernightPackage.h"
using namespace std;

OverNightPackage::OverNightPackage(const string& sn, const string& rn, const string& sa, const string& ra, 
              const string& sc, const string& rc, const string& ss, const string& rs, 
              const string& szc, const string& rzc, float _ounces, float _costPerOunces, 
              float _flatRateNextDay):Package(sn, rn, sa, ra, sc, rc, ss, rs, szc, rzc, _ounces, _costPerOunces),
              flatRateNextDay{_flatRateNextDay} {}

double OverNightPackage::calculateCost() const {
    return Package::calculateCost() + (ounces * flatRateNextDay);
}