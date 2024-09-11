#ifndef VEC_H
#define VEC_H
#include <math.h>

class Vec
{

public:
    float x;
    float y;
    Vec() : x(0.0), y(0.0) {}
    Vec(float xCoordinate, float yCoordinate) : x(xCoordinate), y(yCoordinate) {}

    float getX() const
    {
        return x;
    }
    float getY() const
    {
        return y;
    }

    void set(float xCoordinate, float yCoordinate)
    {
        x = xCoordinate;
        y = yCoordinate;
    }

    void add(Vec &v)
    {
        x += v.getX();
        y += v.getY();
    }
    void print()
    {
        std::cout << "(" << x << "," << y << ")" << std::endl;
    }
};
#endif