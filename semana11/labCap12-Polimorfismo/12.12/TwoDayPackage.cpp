#include <iostream>
#include "TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage(const string& sn, const string& rn, const string& sa, const string& ra, 
              const string& sc, const string& rc, const string& ss, const string& rs, 
              const string& szc, const string& rzc, float _ounces, float _costPerOunces, 
              float _flatRate):Package(sn, rn, sa, ra, sc, rc, ss, rs, szc, rzc, _ounces, _costPerOunces), flatRate{_flatRate} {}

double TwoDayPackage::calculateCost() const {
    return Package::calculateCost() + flatRate;
}