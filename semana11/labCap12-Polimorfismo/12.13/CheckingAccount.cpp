#include "CheckingAccount.h"
#include <iostream>
using namespace std;

CheckingAccount::CheckingAccount(double initialBalance, double fee)
    : Account(initialBalance), transactionFee(fee) {}

void CheckingAccount::credit(double amount) {
    Account::credit(amount);  
    balance -= transactionFee;
}

bool CheckingAccount::debit(double amount) {
    if (amount <= balance) {
        Account::debit(amount);  
        balance -= transactionFee; 
        return true;
    } else {
        cout << "Insufficient funds for the transaction.\n";
        return false;
    }
}
