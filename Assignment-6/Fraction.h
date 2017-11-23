// Name: Joel Turbi
// Version: Assignment 6
// Creation: 11/24/2017
#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include<cstring>
#include <sstream>

using namespace std;
class Fraction
{
private:
  int numerator;
  int denominator;
public:
  // Default constructor
  Fraction()
  {
    this->numerator = 0;
    this->denominator = 1;
  }
  // Overloaded constructor
  Fraction(int num, int den)
  {
    if(den == 0)
      throw "Error: Cannot divide by zero.";

      this->numerator = num;
      this->denominator = den;
  }
  int GetNumerator()
  {
    return this->numerator;
  }
  int GetDenominator()
  {
    return this->denominator;
  }
  Fraction Sum(Fraction ob)
  {
    int num = this->numerator * ob.GetDenominator() + ob.GetNumerator() * this->denominator;
    int den = this->denominator * ob.GetDenominator();
    Fraction ans(num, den);
    // Simplify the fraaction to simplest terms
    ans.Simplify();
    return ans;
  }
  Fraction Difference(Fraction ob)
  {
    int num = this->numerator * ob.GetDenominator() - ob.GetNumerator() * this->denominator;
    // compute the denominator
    int den = this->denominator * ob.GetDenominator();
    Fraction ans(num, den);
    // Simplify the fraaction to simplest terms
    ans.Simplify();
    return ans;
  }
  Fraction Product(Fraction ob)
  {
    int num = this->numerator * ob.GetNumerator();
    int den = this->denominator * ob.GetDenominator();
    Fraction ans(num, den);
    ans.Simplify();
    return ans;
  }
  Fraction Quotient(Fraction ob)
  {
    if(this->denominator == 0 || ob.GetNumerator() == 0)
      throw "Error: Cannot divide by zero.";

      int num = this->numerator * ob.GetDenominator();
      int den = this->denominator * ob.GetNumerator();
      Fraction ans(num, den);
      ans.Simplify();
      return ans;
  }
  string ToString()
  {
    char temp1[100];
    sprintf(temp1, "%d", this->numerator);

    char temp2[100];
    sprintf(temp2, "%d", this->denominator);

    char temp3[100] = " / ";

    strcat(temp1, temp3);
    strcat(temp1, temp2);
    return (string)temp1;
  }
  double Decimal()
  {
    return (double)this->numerator / (double)this->denominator;
  }
  void Simplify()
  {
    int x = this->numerator < this->denominator ? this->numerator : this->denominator;
    int i;

    for( i = 2 ; i < x ; i++ )
    {
      while(this->numerator % i == 0 && this->denominator % i == 0)
      {
        this->numerator /= i;
        this->denominator /= i;
      }
    }
  }
};
#endif
