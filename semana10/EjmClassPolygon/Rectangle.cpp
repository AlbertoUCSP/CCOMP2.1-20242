#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(int a, int b):Polygon(a,b) {}

int Rectangle::area() {
    return width*height; // No es necesario el override aqui
}
