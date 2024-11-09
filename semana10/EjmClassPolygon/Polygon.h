#ifndef POLYGON_H
#define POLYGON_H

class Polygon {
    protected:
       int width;
       int height;
    public:
       Polygon(int,int);

       virtual int area() = 0; // Aqui mi clase se vuelve una clase abstracta

       void printArea();

       virtual ~Polygon() {}

};

#endif