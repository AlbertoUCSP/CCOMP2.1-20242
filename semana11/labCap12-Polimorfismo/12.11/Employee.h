#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include "Date.h"
using namespace std;

class Employee {

public:

   Employee(const string&, const string&, const string&, int, int, int);
   virtual ~Employee() = default;

   void setFirstName( const string& );
   void setLastName( const string& );
   void setSocialSecurityNumber( const string& );

   string getFirstName() const;
   string getLastName() const;
   string getSocialSecurityNumber() const;
   Date getBirthDate() const;

   virtual double earnings() const = 0;
   virtual string toString() const;

private:

   string firstName;
   string lastName;
   string socialSecurityNumber;
   Date birthDate;
};

#endif