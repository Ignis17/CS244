#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include <cmath>
#include <sstream>
#include <iomanip>
#include <string>
using namespace std;

class Parallelogram
{
  public:
    double length;
    double width;
    double angle;
    string type;
    // Default constructor
    Parallelogram()
    {
      length = 1.0;
      width = 1.0;
      angle = 90.0;
      type = "square";
    }
    //constructor with 2 argument
    Parallelogram(double length1, double width1)
    {
      length = length1;
      width = width1;
      angle = 90.0;

      if(length1 == width1)
      {
        type = "square";
      }
      else
      {
        type = "rectangle";
      }
    }
    //constructor taking three argument
    Parallelogram(double length2, double width2,double angle1)
    {
      length = length2;
      width = width2;
      angle = angle1;

      if (angle == 90.0)
      {
        if (length == width)
        {
          type = "square";
        }
        else
        {
          type = "rectangle";
        }
      }
      else
      {
        if (length == width)
        {
          type = "rhombus";
        }
        else
        {
          type = "regular";
        }
      }
    }
    // Perimeter of the parallelogram
    double Perimeter()
    {
      return ((length+width)*2);
    }
    // Calculate the area of parallelogram
    double Area()
    {
      if (type=="square"||type=="rectangle")
      {
        return (length*width);
      }
      else
      {
        if(type=="regular"||type=="rhombus")
        {
          double tempAngle;
          tempAngle = angle*(3.14)/180;
          return (length*width)*sin(tempAngle);
        }
      }
    }
    //
    double MajorDiagonal()
    {
      double tempAngle=0.0;
      if(angle!=90.0)
      {
        tempAngle=(angle>90.0)?angle:180.0-angle;
      }

      if (type=="square"||type=="rectangle")
      {
        return sqrt((length*length)+(width*width));
      }
      else
      {
        if(type=="rhombus"||type=="regular")
        {
          double angle2;
          angle2 = tempAngle*(3.14)/180;
          return sqrt((length*length)+(width*width)-2*(length*width)*cos(angle2));
        }
      }
    }
    //
    double MinorDiagonal()
    {
      double tempAngle=0.0;
      if (angle!=90.0)
      {
        tempAngle=(angle<90.0)?angle:180.0-angle;
      }

      if(type=="square"||type=="rectangle")
      {
        return sqrt((length*length)+(width*width));
      }
      else
      {
        if(type=="rhombus"||type=="regular")
        {
          double angle2;
          angle2 = tempAngle*(3.14)/180;
          return sqrt((length*length)+(width*width)-2*(length*width*cos(angle2)));
        }
      }
   }
   //
   string ToString()
   {
     ostringstream out;
     out << setprecision(1) << fixed << showpoint;
     out << type << "(" << length << "," << width << ","<< angle << ")";
     return out.str();
   }
 };
 #endif
