#include <iostream>
#include "Triangle.h"
using namespace std;

Triangle::Triangle(int a, int b):Polygon(a, b) {}

int Triangle::area() {
    return (width*height) / 2;
}