#ifndef CARBONFOOTPRINT_h
#define CARBONFOOTPRINT_h

class CarbonFootPrint {
    public:
       virtual ~CarbonFootPrint();  // Destructor virtual puro
       virtual double getCarbonFootPrint() const = 0;
       virtual void display() const = 0;
       

};

#endif
