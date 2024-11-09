// Exercise 12.11: ex_12_11.cpp
// Payroll-System Modification

#include <iomanip>
#include <iostream>
#include <typeinfo>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

using namespace std;

const int CURRENT_MONTH{5}; 

int main() {

   cout << fixed << setprecision( 2 );

   vector<Employee*> employees{
      new SalariedEmployee(
         "Arthur", "Morgan", "555-55-5555", 5, 5, 1998, 600 ),
      new CommissionEmployee(
         "Jhon", "Lenon", "666-66-6666", 7, 12, 2001, 10000, .03 ),
      new BasePlusCommissionEmployee(
         "Lewis", "Hamilton", "999-99-9999", 10, 10, 1991, 4000, .02, 500 ) };

   for(Employee* employeePtr:employees) {
      cout << employeePtr->toString() << endl;
      BasePlusCommissionEmployee* derivedPtr{dynamic_cast<BasePlusCommissionEmployee*>(employeePtr)};
      if(employeePtr) {
         cout << "earned $" << employeePtr->earnings() +
            (employeePtr->getBirthDate().getMonth() == ::CURRENT_MONTH ? 100.0 : 0.0 ) << "\n\n";
      }
   }

   for (const Employee* employeePtr:employees) {
      cout << "deleting object of " << typeid(*employeePtr).name() << endl;
      delete employeePtr;
   }
}
