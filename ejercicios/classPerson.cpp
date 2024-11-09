#include <iostream>
using namespace std;

class Persona {
    protected: // Usamos protected ya que esta clase padre heredara a sus clases hijas sus metodos y atributos 
       string nombre;
       int edad;
    public:
       // Metodos públicos que las clases hijas van a heredar
       Persona(string _nombre, int _edad):nombre{_nombre}, edad{_edad} {
        if(edad <= 0) {
            edad = 1;
            }
       }
       string getNombre() {
        return nombre;
       }
       void setNombre(string _nombre) {
        nombre = _nombre;
       }
       int getEdad() {
        return edad;
       }
       void setEdad(int _edad) {
        edad = _edad;
       }
       void presentarse() {
        cout << "Tengo " << edad << " años y me llamo " << nombre << endl;
       }
};

class Astronauta:public Persona { // Sub-clase Astronauta
    private: // Al no ser una clase base no es necesario ponerle protected, salvo si crearamos una nueva clase que
             // heredará atributos y metodos de Astronauta, en cuyo caso seria como una clase hija de Astronauta
             // y una clase nieta de Persona
      int viajes;
      int costoTraje;
    public:
      /*Constructor de la clase hija 1 - "Astronauta"
      Para inicializar correctamente un objeto de esta clase hija, llamamos al constructor de la clase padre 
      para que nos ayude a inicializar los atributos de "Astronauta" que no están explicitamente(nombre, edad)"*/
      Astronauta(string _nombre, int _edad, int _viajes, int _costoTraje):Persona(_nombre,_edad), 
      viajes{_viajes}, costoTraje{_costoTraje} {}
      
      // Agregamos algunos metodos adicionales 
      int getViajes() {
        return viajes;
      }
      int Getcosto() {
        return costoTraje;
      }
      void aumentarViaje() {
        viajes ++;
      }
      
      void presentarse() {
        cout << "***ASTRONAUTA***" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Cantidad de viajes: " << viajes << endl;
        cout << "Costo del traje: " << costoTraje << endl;
      }
};

class Piloto:public Persona {
    private:
       int horasDeVuelo;
       int añosDeServicio;
    public:
       // Constructor de la clase hija 2 - "Piloto"
       // Notese que los constructores de las clases hijas van aculumando los atributos de la mismca clase hija 
       // como los de la clase padre, entonces nuevamente nos apoyamos del constuctor de la clase padre para una 
       // correcta inicializacion del objeto
       Piloto(string _nombre, int _edad, int _horasDeVuelo, int _añosDeServicio):Persona(_nombre,_edad), 
       horasDeVuelo{_horasDeVuelo}, añosDeServicio{_añosDeServicio} {}
              string getNombre() {
        return nombre;
       }
       
       // Metodos adicionales
       void setHoras(int _horas) {
        horasDeVuelo = _horas;
       }
       int getHoras() {
        return horasDeVuelo;
       }
       void setAños(int _años) {
        añosDeServicio = _años;
       }
       int getAños() {
        return añosDeServicio;
       }
       void presentarse() {
        cout << "***PILOTO***" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Horas de vuelo: " << horasDeVuelo << endl;
        cout << "Años de servicio: " << añosDeServicio << endl;
       }


};

int main() {
    Persona p1("Oscar",26);
    cout << p1.getNombre() << endl;
    p1.setNombre("Alberto");
    cout << p1.getNombre() << endl;

    p1.presentarse();

    Astronauta a1("Mike", 32, 50, 2000);
    cout << a1.getNombre() << endl;
    a1.presentarse();

    Piloto pi1("Arturo", 54, 600, 20);
    pi1.presentarse();
    cout << pi1.getNombre() << endl;
    cout << pi1.getHoras() << endl;
}