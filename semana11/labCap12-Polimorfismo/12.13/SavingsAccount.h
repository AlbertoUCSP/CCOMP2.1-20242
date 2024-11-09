#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H
#include "Account.h"

class SavingsAccount:public Account {
    private:
       double interestRate;
    public:
       SavingsAccount(double, double);

       double calculateInterest() const;
};


#endif