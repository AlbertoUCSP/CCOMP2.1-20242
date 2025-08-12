#include <iostream>
#include "PhoneNumber.h"
using namespace std;

int main() {
    PhoneNumber number;

    cout << "Enter you phone number in the form (555) 555-5555:" << endl;
    cin >> number;

    cout << "\nThe phone number entered was:\n" << number;

}