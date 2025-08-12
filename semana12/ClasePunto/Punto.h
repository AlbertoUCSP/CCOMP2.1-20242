#ifndef __PUNTO_H__
#define __PUNTO_H__

#include <iostream>

class Punto {
    private:
        int x, y;

    public:
        Punto(int _x = 0, int _y = 0) : x{_x}, y{_y} {}
        
        // Constructor copia por defecto
        Punto(const Punto &p) { 
            x = p.x;
            y = p.y;
        }

        void setX(int x) {
            this->x = x;
        }
        void setY(int y) {
            this->y = y;
        } 
        int getX() const {
            return x;
        }

        int getY() const {
            return y;
        }

        void print() const {
            std::cout << "(" << x << ", " << y << ")" << std::endl;
        }
        
        // Sobrecargando el operador + 
        Punto operator+ (const Punto& p) const {
            int sumaX = x + p.x; // Suma de valores para x
            int sumaY = y + p.y; // Suma de valores para y
            Punto suma(sumaX, sumaY); // Objeto Punto a retornar llamado suma, recibe como 
                                      // parametros las sumas de las componentes.
            return suma;
        }

};

#endif