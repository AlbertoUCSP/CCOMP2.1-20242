#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#include <string>
#include "Employee.h"
using namespace std;

class CommissionEmployee : public Employee {

public:

   CommissionEmployee(const string&, const string&, const string&, int, int, int, double = 0.0, double = 0.0 );
   
   virtual ~CommissionEmployee() = default;

   void setCommissionRate(double);
   void setGrossSales(double);

   double getCommissionRate() const;
   double getGrossSales() const;

   virtual double earnings() const override;
   virtual string toString() const override;

private:

   double grossSales;
   double commissionRate;
};

#endif