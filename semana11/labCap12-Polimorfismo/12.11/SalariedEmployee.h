#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include <string>
#include "Employee.h"
using namespace std;

class SalariedEmployee:public Employee {

public:
   SalariedEmployee(const string&, const string&, const string&, int, int, int, double = 0.0 );
   
   virtual ~SalariedEmployee() = default;

   void setWeeklySalary(double);
   double getWeeklySalary() const;

   virtual double earnings() const override;
   virtual string toString() const override;

private:
   double weeklySalary;
};

#endif