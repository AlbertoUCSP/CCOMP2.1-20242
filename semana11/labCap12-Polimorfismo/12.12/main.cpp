#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <iostream>
using namespace std;

int main() {
    Package package("John Doe", "Jane Smith", "123 Elm St", "456 Oak St", 
                     "New York", "Los Angeles", "NY", "CA", 
                     "10001", "90001", 6, 0.8);  // Ounces: 6, Cost per Ounce: 0.8

    TwoDayPackage twoDayPackage("Alice Brown", "Bob White", "789 Maple Ave", "101 Pine Blvd", 
                                 "Chicago", "Houston", "IL", "TX", 
                                 "60601", "77001", 8, 1.2, 3);  // Ounces: 8, Cost per Ounce: 1.2, Flat rate: 3

    OverNightPackage overNightPackage("Charlie Green", "Diana Blue", "234 Birch Rd", "567 Cedar Dr", 
                                       "San Francisco", "Miami", "CA", "FL", 
                                       "94102", "33101", 5, 2.5, 2.5);  // Ounces: 5, Cost per Ounce: 2.5, Flat rate: 2.5

    cout << "CALCULATING THE COST FOR EACH KIND OF PACKAGE" << "\n"
         << "Normal package: " << package.calculateCost() << "\n"
         << "Two days package: " << twoDayPackage.calculateCost() << "\n"
         << "Over night package: " << overNightPackage.calculateCost() << endl;
}
