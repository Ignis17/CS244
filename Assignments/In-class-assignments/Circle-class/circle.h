#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
  public:
  double radius; // field named radius
  double PI;     // field named PI

  Circle()       // default constructor
  {
    radius = 1;
    PI = 3.14156;
  }
  Circle(const Circle& other) // copy constructor
  {
    radius = (other.radius);
    PI = (other.PI);
  }
  double  Circumference() // method
  {
    return 2*PI*radius;
  }
};
#endif
