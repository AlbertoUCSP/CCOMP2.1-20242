#include <iostream>
#include <stdexcept>
#include "Package.h"
using namespace std;

Package::Package(const string& sn, const string& rn, const string& sa, const string& ra, const string& sc, const string& rc, const string& ss, 
const string& rs, const string& szc, const string& rzc, float _ounces, float _costPerOunces):senderName{sn}, recipientName{rn},
       senderAddress{sa}, recipientAddress{ra},
       senderCity{sc}, recipientCity{rc},
       senderState{ss}, recipientState{rs},
       senderZipCode{szc}, recipientZipCode{rzc},
       ounces{_ounces}, costPerOunces{_costPerOunces} {
        while(ounces < 0) {
            cout << "The weigth/ounces can't be negative, enter a valied value: ";
            cin >> ounces;
        }
        while(costPerOunces < 0) {
            cout << "The price per ounces can't be negative, enter a valied value: ";
            cin >> costPerOunces;
        }
       }

double Package::calculateCost() const {
    return ounces * costPerOunces;
};
