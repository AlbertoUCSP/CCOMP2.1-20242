#include <iostream>
#include "Punto.h"

using namespace std;

int main() {
    Punto p{4, 5};
    Punto r{1, 1};
    
    cout << "Punto P = ";
    p.print();

    cout << "Punto R = ";
    r.print();

    cout << "Inicializacion usando el constructor copia por defecto" << "\nPunto Q = ";
    Punto q{p}; // Se invoca al constructor copia
    q.print();

    /* 
    Aqui tenemos un error, ya que el compilador no sabe como usar 
    los operadores para las instancias que le pasamos
    
    cout << p << endl;*/
    cout << "Sobrecarga del operador suma(+)" << "\nPunto S(suma de P + R) = ";
    Punto s = p + r;
    s.print();
    
    

}