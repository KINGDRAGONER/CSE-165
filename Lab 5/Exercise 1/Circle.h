#ifndef CIRCLE_H
#define CIRCLE_H
#include <math.h>

class Circle
{
private:
  double x;
  double y;
  double r;

public:
  Circle() : x(0.0), y(0.0), r(1.0) {}
  Circle(double xCoordinate, double yCoordinate, double radius) : x(xCoordinate), y(yCoordinate), r(radius) {}

  double getX() const
  {
    return x;
  }
  double getY() const
  {
    return y;
  }
  double getR() const
  {
    return r;
  }

  void setX(double xCoordinate)
  {
    x = xCoordinate;
  }
  void setY(double yCoordinate)
  {
    y = yCoordinate;
  }
  void setR(double radius)
  {
    r = radius;
  }
  double getArea()
  {
    return M_PI * (r) * (r);
  }
};

#endif