#include <iostream>
#include "Racional.h"
using namespace std;

int main() {
    Racional r1(12,4);
    Racional r2(22,11);
    Racional r3(9,6);
    Racional r4(3,2);

    cout << "OPERACIONES CON FRACCIONES" << endl;
    cout << "Suma: " << r1 << " + " << r2 << " = " << r1 + r2 << endl;
    cout << "Resta: " << r1 << " - " << r2 << " = " << r1 - r2 << endl;
    cout << "Multiplicacion: " << r1 << " x " << r2 << " = " << r1 * r2 << endl;
    cout << "Division: " << r1 << " / " << r2 << " = " << r1 / r2 << endl;

    cout << "\nCOMPARANCION DE FRACCIONES" << endl;
    cout << r1 << " = " << r2 << "?" << " -> " << (r1 == r2);

    cout << (r3 == r4);

}