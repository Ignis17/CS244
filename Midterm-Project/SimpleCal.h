// Name: Joel Turbi
// Description: Simple Calculator
// Due Date: 11/11/2017

#ifndef SIMPLECALCULATOR_H
#define SIMPLECALCULATOR_H

#include <cmath>
#include<cstdlib>

class Calculator
{
  public:
    double Addition(const double &x, const double &y)
    {
      return (x + y);
    }

    double Subtraction(const double &x, const double &y)
    {
      return (x - y);
    }

    double Multiplication(const double &x, const double &y)
    {
      return (x * y);
    }

    double Division(const double &x, const double &y)
    {
      return (x / y);
    }
    double Power(const double &x, const double &y)
    {
      return pow(x,y);
    }
};
#endif
