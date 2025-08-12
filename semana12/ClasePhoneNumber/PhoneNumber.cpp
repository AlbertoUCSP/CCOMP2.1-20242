#include <iomanip>
#include "PhoneNumber.h"
using namespace std;

ostream& operator<<(ostream& output, const PhoneNumber& number) {
    output << "Area code: " << number.areaCode << "\nExchange: " << number.exchange 
    << "\nLine: " << number.line << "\n" << "(" << number.areaCode << ") " << number.exchange
    << "-" << number.line << "\n"; 
    return output;
}

istream& operator>>(istream& input, PhoneNumber& number) {
    input.ignore(); // Ignora el parentesis de apertura (
    input >> setw(3) >> number.areaCode; // Limita a 3 caracteres el numero ingresado a areaCode
    input.ignore(2); // Ignora el parentesis de cierre ) y un caracter mas, en este caso el espacio
    input >> setw(3) >> number.exchange;
    input.ignore(); // Ignora el dash (-) 
    input >> setw(4) >> number.line;
    return input;
}