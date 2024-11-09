#ifndef ACCOUNT_H
#define ACCOUNT_H
using namespace std;

class Account {
    protected:
       double balance;
    public:
       Account(double = 0);

       virtual void credit(double);

       virtual bool debit(double);

       double getBalance() const;
};

#endif