#include <iostream>
#include "Racional.h"
using namespace std;

Racional::Racional(int n, int d) : numerador(n), denominador(d) {
    denominador = (denominador == 0) ? 1 : d;
}
void Racional::operator=(const Racional& r) {
    if (this != &r) {
       numerador = r.numerador;
       denominador = r.denominador; 
    }
    
}

int Racional::gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

Racional Racional::operator+(const Racional& r) const {
    int sumaNumerador = (numerador * r.denominador) + (denominador * r.numerador);
    int sumaDenominador = denominador * r.denominador;
    return Racional(sumaNumerador, sumaDenominador);
}
Racional Racional::operator-(const Racional& r) const {
    int restaNumerador = (numerador * r.denominador) - (denominador * r.numerador);
    int restaDenominador = denominador * r.denominador;
    return Racional(restaNumerador, restaDenominador);
}
Racional Racional::operator*(const Racional& r) const {
    int multNumerador = numerador * r.numerador;
    int multDenominador = denominador * r.denominador;
    return Racional(multNumerador, multDenominador);
}
Racional Racional::operator/(const Racional& r) const {
    int divNumerador = numerador * r.denominador;
    int divDenominador = denominador * r.numerador;
    return Racional(divNumerador, divDenominador);
}
bool Racional::operator==(const Racional& r) const {
    if(this->gcd(numerador, denominador) == r.gcd(r.numerador, r.denominador)) {
        return true;
    }
    return false;
}
ostream& operator<<(ostream& output, const Racional& r) {
    output << r.numerador << "/" << r.denominador;
    return output; 
}
istream& operator>>(istream& input, Racional& r) {
    char slash;
    input >> r.numerador >> slash >> r.denominador;
    if(r.denominador == 0) {
        cout << "El denominador no puede ser 0" << endl;
        r.denominador = 1;
    }
    return input;
}
