#include <iostream>
#include <vector>
using namespace std;

class Polygon {
protected:
    int width;
    int height;
public:
    Polygon(int a, int b) : width{a}, height{b} {}
    virtual int area() const = 0;
    virtual void printArea() const {
        cout << this->area() << "\n";
    }

    // Función amiga para mostrar miembros
    friend void showMembers(const Polygon& polygon) {
        cout << "Width: " << polygon.width << "\n" << "Height: " << polygon.height << endl;
    }
};

class Rectangle : public Polygon {
public:
    Rectangle(int a, int b) : Polygon(a, b) {}

    int area() const override {
        return width * height;
    }

    void printArea() const override {
        cout << "Area del rectangulo: ";
        cout << this->area() << endl;
    }
};

class Triangle : public Polygon {
public:
    Triangle(int a, int b) : Polygon(a, b) {}

    int area() const override {
        return (width * height) / 2;
    }

    void printArea() const override {
        cout << "Area del triangulo: ";
        cout << this->area() << endl;
    }
};

// Recomendación: pasar por referencia para evitar la copia del vector
void printPolygonsArea(const vector<Polygon*>& p) {
    for (const auto& poly : p) {
        cout << "Area: ";
        poly->printArea();
    }
}

int main() {
    vector<Polygon*> polygons = {new Rectangle(2, 3), new Triangle(6, 3)};

    for (const auto& poly : polygons) {
        cout << "Datos del Poligono: " << endl;
        showMembers(*poly);
        poly->printArea();
        delete poly;
    }

    return 0;
}
