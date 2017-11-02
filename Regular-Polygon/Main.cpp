#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include "regPoly.h"

using namespace std;

string Stats(RegularPolygon Polygon)
{
  stringstream out;
  out << setprecision(1) << fixed << showpoint;
  out << Polygon.toString() << "\n" <<"Area: " << Polygon.Area() << "\n"
      << "Sum of Interior Angles: " << Polygon.SumOfInteriorAngles() << "\n"
      << "Perimeter: " << Polygon.Perimeter() << "\n";
  return out.str();
}

void Records(int n)
{
  int i;
  double length;
  if (n>=1)
  {
    for(i=3;i<=n;i++)
    {
      length = (rand() % 10 + 1);
      RegularPolygon Polygon(length, i);
      cout << Stats(Polygon) << "\n";
    }
  }
}

int main()
{
  Records(15);
  return 0;
}
