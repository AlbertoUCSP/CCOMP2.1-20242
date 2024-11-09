#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
    protected:
       std::string name;
       int age;
    public:
       Person(const std::string&, int);  // sin & para int

       std::string getName() const;
       void setName(const std::string&);

       int getAge() const;
       void setAge(int);  // sin & para int

       virtual void introduce(); // Here I declared a virtual function wich help me with polifomis
};

#endif
