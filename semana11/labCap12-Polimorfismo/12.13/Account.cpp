#include <iostream>
#include "Account.h"
using namespace std;

Account::Account(double initialBalance):balance{initialBalance} {
    if(balance <= 0.0) {
        balance = 0.0;
    }
}

void Account::credit(double amount) {
    balance += amount;
}

bool Account::debit(double amount) {
    if (amount > balance) {
        cout << "The debit amount exceeded the account balance" << endl;
        return false;
    } else {
        balance -= amount;
        return true;
    }
}

double Account::getBalance() const {
    return balance;
}

