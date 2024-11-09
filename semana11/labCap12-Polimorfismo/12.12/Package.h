#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
using namespace std;

class Package {
    protected:
       string senderName, recipientName;
       string senderAddress, recipientAddress;
       string senderCity, recipientCity;
       string senderState, recipientState;
       string senderZipCode, recipientZipCode;
       float ounces;
       float costPerOunces;
    public:
       Package(const string&, const string&, const string&, const string&, const string&, 
       const string&, const string&, const string&, const string&, const string&, float, float);
       
       virtual double calculateCost() const;
};



#endif