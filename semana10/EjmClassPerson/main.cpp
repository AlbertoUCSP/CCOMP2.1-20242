#include <iostream>
#include "Person.h"
#include "Astronauta.h"
#include "Pilot.h"
using namespace std;

int main() {
    
    // UPCASTING
    Astronauta *ptrAstro = new Astronauta("Alberto", 30, 5, 20000);    
    Person *ptrPerson1 = ptrAstro; // Upcasting


    ptrAstro->increaseTrips(); // Acceso a método específico de Astronauta
    cout << ptrAstro->getName() << endl; // Acceso a método de Person
    // ptrPerson1->increaseTrips(); // Esto no compila, ya que ptrPerson1 es de tipo Person*

    delete ptrAstro; // Liberar memoria

    // DOWNCASTING
    Person* ptrPerson2 = new Pilot("Alex", 22, 12,1234);
    ptrPerson2 = dynamic_cast<Pilot*>(ptrPerson2);


    return 0;
}
