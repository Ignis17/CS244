#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <cmath>
#include <string>
#include <sstream>

class Triangle
{
  double side[];
  static double TORAD = 0.01745329;
  static double TODEG = 57.2957795;

  public:
    Triangle()
    {
      side[0] = 1;
      side[1] = 1;
      side[2] = 1;
    }
    // Overloaded constructor
    Triangle(double x, double y, double z)
    {
      side[0] = (x>0)?(x):1;
      side[1] = (y>0)?(y):1;
      side[2] = (z>0)?(z):1;
    }
    //
    ~Triangle(){}
    //
    Triangle(const Triangle& other)
    {
      side[0] = other.side[0];
      side[1] = other.side[1];
      side[2] = other.side[2];
    }
    Triangle operator=(const Triangle rhs)
    {
	     if(this != &rhs)
	     {
         this->side[0] = rhs.side[0];
         this->side[1] = rhs.side[1];
         this->side[2] = rhs.side[2];
	     }
			return *this;
    }
};
//double Triangle::Perimeter()
//{
//  return side[0]+side[1]+side[2];
//}
double Triangle::LargestAngle()
{

}
double Triangle::MedianAngle()
{

}
double Triangle::SmallestAngle()
{


}
double Triangle::Area()
{
  return (side[0] + side[1])/2;
}
string Triangle::ToString()
{

}
#endif
