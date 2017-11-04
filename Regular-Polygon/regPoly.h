// Name: Joel Turbi
// Description: Exam 2 - Take Home

#ifndef REGPOLYGON_H
#define REGPOLYGON_H

#include <cmath>
#include <sstream>
#include <string>
#include <iostream>

class RegularPolygon
{
  // fields
  double sideOfPoly;
  double lengthOfPoly;
  public:
    // Default Constructor
    RegularPolygon()
    {
      sideOfPoly = 3;
      lengthOfPoly = 1;
    }
    // Public Overloader
    RegularPolygon(double length)
    {
      lengthOfPoly = (length>0)?(length):1;
      sideOfPoly = (length>0)?(length):3;
    }
    // public Overloader
    RegularPolygon(double len, double side)
    {
      lengthOfPoly = (len>0)?(len):1;
      sideOfPoly = (side>=3)?(side):3;
    }
    //public destructor
    ~RegularPolygon(){}
    // Public copy Constructor
    RegularPolygon(const RegularPolygon& other)
    {
      lengthOfPoly = other.lengthOfPoly;
      sideOfPoly = other.sideOfPoly;
    }
    // Public Assignment operator
    RegularPolygon operator=(const RegularPolygon rhs)
    {
      if(this != &rhs)
      {
        this->lengthOfPoly = rhs.lengthOfPoly;
        this->sideOfPoly = rhs.sideOfPoly;
      }
      return *this;
    }
    // Returns perimeter of Polygon
    double Perimeter()
    {
      return (sideOfPoly*lengthOfPoly);
    }
    // Returns the sum of all interior angles of the Polygon
    double SumOfInteriorAngles()
    {
      return (sideOfPoly-2)*180.0;
    }
    // Returns area of Polygon
    double Area()
    {
      double perimeter = Perimeter();
      double apothem =(sideOfPoly)/(2*tan(180/lengthOfPoly));
      return (apothem*perimeter)/2;
    }
    // Returns a string that lists the fields of each set to one decimal point sepe
    std:: string toString()
    {
      std:: stringstream out;
      out << "Side: " << sideOfPoly << "\n";
      out << "Length: " << lengthOfPoly;
      return out.str();
    }
};
#endif
