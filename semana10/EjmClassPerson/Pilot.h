#ifndef PILOT_H
#define PILOT_H
#include "Person.h"

class Pilot:public Person {
    private:
       int hoursOfFly;
       int yearsInService;
    public:
       Pilot(std::string, int, int, int);

       int getHoursOfFly() const;
       void setHoursOfFly(int);

       int getYearsInService() const;
       void setYearsInService(int);

       void introduce() override;
};


#endif