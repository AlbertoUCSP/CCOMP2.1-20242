#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H
#define BASEPLUSCOMMISSIONEMPLOYEE_H
#include <string>
#include "CommissionEmployee.h"
using namespace std;

class BasePlusCommissionEmployee:public CommissionEmployee {
public:
   BasePlusCommissionEmployee(
      const string&, const string&, const string&, int, int, int,
      double = 0.0, double = 0.0, double = 0.0 );
   virtual ~BasePlusCommissionEmployee() = default;

   void setBaseSalary(double);
   double getBaseSalary() const;

   virtual double earnings() const override;
   virtual string toString() const override;

private:
   double baseSalary;
};

#endif