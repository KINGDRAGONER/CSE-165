#ifndef RECT_H
#define RECT_H
#include <math.h>
#include "Vec.h"

class Rect
{
public:
    float x, y;
    float w, h;
    Rect(float xCoordinate, float yCoordinate, float widthCoordinate, float heightCoordinate) : x(xCoordinate), y(yCoordinate), w(widthCoordinate), h(heightCoordinate) {}


  void setwidth(float widthCoordinate)
  {
    w = widthCoordinate;
  }
  void setheight(float heightCoordinate)
  {
    h = heightCoordinate;
  }
bool contains(const Vec &point)
{
    if (point.getX() >= x && point.getX() <= x + w && point.getY() <= y && point.getY() <= y + h) {
        return true;
    } else {
        return false;
    }
}

};
#endif