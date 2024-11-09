#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include "Account.h"

class CheckingAccount:public Account {
    private:
       double transactionFee;
    public:
       CheckingAccount(double, double);

       void credit(double) override;

       bool debit(double) override; 
};



#endif