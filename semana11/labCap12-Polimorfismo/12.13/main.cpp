#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
using namespace std;

int main() {
    Account account(100.0);
    cout << "Initial balance: " << account.getBalance() << endl;

    account.credit(50.0);
    cout << "Balance after credit of 50: " << account.getBalance() << endl;
    account.debit(30.0);
    cout << "Balance after credit 30: " << account.getBalance() << endl;

    account.debit(150.0);  

    SavingsAccount savings(200.0, 0.05);  
    double interest = savings.calculateInterest();
    savings.credit(interest);
    cout << "Balance after add interest of 5%: " << savings.getBalance() << endl;

    CheckingAccount checking(300.0, 1.0); 
    checking.credit(50.0);
    cout << "Balance of checking after credit of 50 (with transaction fee 1): " << checking.getBalance() << endl;

    checking.debit(100.0);
    cout << "Balance of checking after credit of 100 (with transaction fee 1): " << checking.getBalance() << endl;

    checking.debit(500.0);  

    return 0;
}
