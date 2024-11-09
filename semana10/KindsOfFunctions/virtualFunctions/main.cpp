#include "Animal.h"
#include "Perro.h"
#include "Gato.h"
using namespace std;

int main() {
    Animal a1("Perro","Mamifero" );
    a1.hacerSonido();

    Perro p1("Perro", "Mamifero", "Juan", 4);
    p1.hacerSonido();
}