#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Polygon.h"

class Triangle:public Polygon {
    public:
       Triangle(int, int);

       int area() override;
};


#endif