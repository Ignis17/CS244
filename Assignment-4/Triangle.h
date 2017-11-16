// Name: Joel Turbi
// Version: Assignment 4 - Triangles
// Creation: 11/16/2017
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

class Triangle
{
  public:
    double sides[3]; // Double array field for triangle's sides.
    static const double TORAD = 0.01745329; // Public static constant double field TORAD.
    static const double TODEG = 57.2957795; // Public static constant double field TODEG.

    // Public default constructor.
    Triangle()
    {
      this->sides[0]=1;
      this->sides[1]=1;
      this->sides[2]=1;
    }
    // Public overloaded constructor.
    Triangle(double side1,double side2,double side3)
    {

      if(side1<0)
      this->sides[0]=side1;

      if(side2<0)
      this->sides[1]=side2;

      if(side3<0)
      this->sides[2]=side3;

      if(side1>0 && side2>0 && side3>0)
      {
        this->sides[0]=side1;
        this->sides[1]=side2;
        this->sides[2]=side3;
      }
    }
    // Public destructor.
    ~Triangle(){}

    // Public copy constructor.
    Triangle(Triangle& c)
    {
      this->sides[0]=c.sides[0];
      this->sides[1]=c.sides[1];
      this->sides[2]=c.sides[2];
    }
    // Public overloaded assignment operator.
    void operator =(Triangle &t)
    {
      this->sides[0]=t.sides[0];
      this->sides[1] = t.sides[1];
      this->sides[2] = t.sides[2];
    }
    // Public mutator for side # 1.
    void SetSide1(double side1)
    {
      this->sides[0]=side1;
    }
    // Public mutator for side # 2.
    void SetSide2(double side2)
    {
      this->sides[1]=side2;
    }
    // Public mutator for side # 3.
    void SetSide3(double side3)
    {
      this->sides[2]=side3;
    }
    // Public accessor for side # 1.
    double GetSide1()
    {
      return sides[0];
    }
    // Public accessor for side # 2.
    double GetSide2()
    {
      return sides[1];
    }
    // Public accessor for side # 3.
    double GetSide3()
    {
      return sides[2];
    }
    // Public double method for Area().
    double Area()
    {
      double s = (sides[0] + sides[1] + sides[3]) / 2;
      // Calculating the area of the triangle
      return sqrt(s * (s - sides[0]) * (s - sides[1]) * (s - sides[2]));
    }
    // Public double method for Perimeter().
    double Perimeter()
    {
      return (sides[0]+sides[1]+sides[2]);
    }
    // Public string method named Stats().
    string Stats(Triangle& T)
    {
      Sort(T);
      stringstream out;
      out << "Side1: " << sides[0] << endl;
      out << "Side2: " << sides[1] << endl;
      out << "Side3: " << sides[2] << endl;
      out << "Area: " << Area() << endl;
      out << "Perimeter: " << Perimeter() << endl;
      return out.str();
    }
    // Void function named Sort().
    void Sort(Triangle& T)
    {
      int s1=T.GetSide1();
      int s2=T.GetSide2();
      int s3=T.GetSide3();

      if(s1>s2 && s1>s3)
      T.SetSide1(s1);
      else if(s2>s3 && s2>s1)
      T.SetSide1(s2);
      else if(s3>s1 && s3>s2)
      T.SetSide1(s3);

      if(s2<s1 && s2>s3)
      T.SetSide2(s2);
      else if(s3<s2 && s3>s1)
      T.SetSide1(s3);
      else if(s1<s2 && s1>s3)
      T.SetSide1(s1);

      if(s3<s1 && s3<s2)
      T.SetSide2(s3);
      else if(s2<s3 && s2<s1)
      T.SetSide1(s2);
      else if(s1<s2 && s1<s3)
      T.SetSide1(s1);
    }
};
#endif
