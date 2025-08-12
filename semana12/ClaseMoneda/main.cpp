#include <iostream>
#include "SolPeruano.h"

using namespace std;

int main() {
   
    SolPeruano a{5, 75};
    SolPeruano b{3, 50};
    SolPeruano c = a + b;
    
    cout << "Soles peruanos" << "\nSol a: ";
    a.print();
    cout << "Sol b: ";
    b.print();
    cout << "Sol c(a + b): ";
    c.print();

    SolPeruano p1{4, 50};
    SolPeruano p2{1, 80};
    
    /*
    ERROR: NO SE HA SOBRECARGADO EL OPERADOR
    SolPeruano p3 = p1 + p2;
    */

   // Despues de sobrecargar el operador
   SolPeruano p3 = p1 + p2;          // Equivalente   
   SolPeruano p4 = p1.operator+(p2); // Equivalente 
   p3.print();

   if (p2 < p1) {
    cout << "p2 es menor que p1" << endl;
    } 
    else {
    cout << "p1 es mayor o igual a p2" << endl;
    }


}