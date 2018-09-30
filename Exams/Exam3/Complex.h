// Author: Joel Turbi
// Creation: 12/05/2017
// Description: Exam 3

#ifndef COMPLEX_H
#define COMPLEX_H

#include <string>
#include <sstream>
#include <cmath>
using namespace std;

class Complex
{
private:
  double real;
  double imaginary;

public:
  Complex()
  {
    real = 1;
    imaginary = 0;
  }
  Complex(double real)
  {
    this->real = real;
    imaginary = 0;
  }
  Complex(double real, double imaginary)
  {
    this->real = real;
    this->imaginary = imaginary;
  }
  Complex(const Complex& other)
  {
    real = other.real;
    imaginary = other.imaginary;
  }
  Complex operator =(const Complex& rhs)
  {
    if(this != &rhs)
    {
      this->real = rhs.real;
      this->imaginary = rhs.imaginary;
    }
    return *this;
  }

  ~Complex(){}

  const double GetReal()
  {
    return real;
  }

  const double GetImaginary()
  {
    return imaginary;
  }

  void SetReal(double real)
  {
    this->real = real;
  }

  void SetImaginary(double imaginary)
  {
    this->imaginary = imaginary;
  }

  const double Modulus()
  {
    double rea = real;
    double ima = imaginary;
    double diff = (rea*rea)+(ima*ima);
    return sqrt(diff);
  }

  const Complex& Complement()
  {
    this->imaginary=-this->imaginary;
    return *this;
  }

  friend Complex* Sum(Complex &first,Complex &second)
  {
    Complex *comp=new Complex();
    comp->SetReal(first.real+second.real);
    comp->SetImaginary(first.imaginary+second.imaginary);
    return comp;
  }

  friend Complex* Difference(const Complex &first,const Complex &second)
  {
    Complex *comp=new Complex();
    comp->SetReal(first.real-second.real);
    comp->SetImaginary(first.imaginary-second.imaginary);
    return comp;

  }

  friend Complex* Product(Complex &first,Complex &second)
  {
    Complex *comp=new Complex();
    comp->SetReal((first.real*second.real)-(second.imaginary*first.imaginary));
    comp->SetImaginary(first.imaginary*second.real+second.imaginary*first.real);
    return comp;
  }

  friend Complex* Quotient(Complex &first,Complex &second)
  {
    Complex *comp=new Complex();
    double denominator = (second.Modulus())*(second.Modulus());
    if(denominator==0)
    {
      throw "ERROR:CAN'T DIVIDE BY ZERO!";
    }

    double num_real=first.real*second.real-(first.imaginary*(-second.imaginary));
    double num_imag=(first.real*(-second.imaginary))+(second.real*first.imaginary);
    comp->SetReal(num_real/denominator);
    comp->SetImaginary(num_imag/denominator);
    return comp;
  }
  string ToString()
  {
    string emptystring = "";
    ostringstream out;
    out << this->real;
    emptystring = emptystring + out.str() ;
    out.str("");
    out.clear();
    out << this->imaginary;
    emptystring = emptystring+"+"+out.str()+"i";
    return emptystring;
  }

  friend ostream &operator<<(ostream &out,Complex &comp)
  {
    out <<comp.ToString();
    return out;
  }

  friend bool operator==(Complex &first,Complex &second)
  {
    if(first.real==second.real && first.imaginary == second.imaginary)
    {
      return true;
    }
    return false;

  }

  friend bool operator!=(Complex &first,Complex &second)
  {
    if(first.real==second.real && first.imaginary == second.imaginary)
    {
      return false;
    }
    return true;
  }

  friend bool operator<(Complex &first,Complex &second)
  {
    if(first.Modulus() < second.Modulus())
    {
      return true;
    }
    return false;
  }

  friend bool operator>(Complex &first,Complex &second)
  {
    if(first.Modulus() > second.Modulus())
    {
      return true;
    }
    return false;
  }
};
#endif
