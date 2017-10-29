#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
  public:
  int radius;
  double PI;
  Circle()
  {
    radius = 1;
    PI = 3.14156;
  }
  Circle(const Circle& other)
  {
    radius = (other.radius);
    PI = (other.PI);
  }
  double  Circumference()
  {
    return 2*PI*radius;
  }
};
#endif
