#ifndef RACIONAL_H
#define RACIONAL_H
#include <iostream>

class Racional {
    private:
       int numerador;
       int denominador;
    public:
       Racional(int = 1, int = 1);

       int gcd(int, int);

       void operator=(const Racional&);

       Racional operator+(const Racional&) const;

       Racional operator-(const Racional&) const;

       Racional operator*(const Racional&) const;

       Racional operator/(const Racional&) const;

       bool operator==(const Racional&) const;

       friend std::ostream& operator<<(std::ostream& output, const Racional& r);

       friend std::istream& operator>>(std::istream& input, Racional& r);


};

#endif