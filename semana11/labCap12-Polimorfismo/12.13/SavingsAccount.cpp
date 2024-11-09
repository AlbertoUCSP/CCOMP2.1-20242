#include <iostream>
#include "SavingsAccount.h"
using namespace std;

SavingsAccount::SavingsAccount(double initialBalance, double _interestRate):Account(initialBalance), 
interestRate{_interestRate} {}

double SavingsAccount::calculateInterest() const {
    return balance * interestRate;

}