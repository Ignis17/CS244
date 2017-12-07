// Author: Joel Turbi
//

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

  const double modulus()
  {
    double r = real;
    double i = imaginary;
    double d = (r*r)+(i*i);
    return sqrt(d);
  }
  //find the complement of a complex number

  const Complex& Complement()

  {

  this->imaginary=-this->imaginary; //invert the imaginary sign

  return *this;//return this object

  }

  //function to find the sum of two complex numbers

  friend Complex* sum(Complex &one,Complex &two)

  {

  Complex *c=new Complex();//amke new object

  c->SetReal(one.real+two.real);//real is sum of the two complex numbers

  c->SetImaginary(one.imaginary+two.imaginary);//imaginary is sum of the two complex numbers

  return c;//return the pointer

  }

  //function to find the difference of two complex numbers

  friend Complex* difference(const Complex &one,const Complex &two)

  {

  Complex *c=new Complex();

  c->SetReal(one.real-two.real);

  c->SetImaginary(one.imaginary-two.imaginary);

  return c;

  }

  //function to find the product of two complex numbers

  friend Complex* product(Complex &one,Complex &two)

  {

  Complex *c=new Complex();

  c->SetReal((one.real*two.real)-(two.imaginary*one.imaginary));

  c->SetImaginary(one.imaginary*two.real+two.imaginary*one.real);

  return c;

  }

  //function to find the quotient of two complex numbers

  friend Complex* quotient(Complex &one,Complex &two)

  {

  Complex *c=new Complex();

  double den=(two.modulus())*(two.modulus());

  if(den==0)

  {

  throw "ERROR:CAN'T DIVIDE BY ZERO!";

  }

  double num_real=one.real*two.real-(one.imaginary*(-two.imaginary));

  double num_imag=(one.real*(-two.imaginary))+(two.real*one.imaginary);

  c->SetReal(num_real/den);

  c->SetImaginary(num_imag/den);

  return c;

  }

  string ToString()

  {

  string s="";

  ostringstream oss;

  oss << this->real;

  s=s + oss.str() ;

  //set an empty string

  oss.str("");

  oss.clear();//clear the oss

  oss << this->imaginary;

  s=s+"+"+oss.str()+"i";

  return s;

  }

  ////friend function overload << operator

  friend ostream &operator<<(ostream &o,Complex &c)

  {

  o<<c.ToString();

  return o;

  }

  //friend function overload == operator

  friend bool operator==(Complex &a,Complex &b)

  {

  if(a.real==b.real&&a.imaginary==b.imaginary)

  return true;

  return false;

  }

  //friend function overload != operator

  friend bool operator!=(Complex &a,Complex &b)

  {

  if(a.real==b.real&&a.imaginary==b.imaginary)//simple condition check

  return false;

  return true;//return true

  }

  //friend function overload < operator

  friend bool operator<(Complex &a,Complex &b)

  {

  if(a.modulus()<b.modulus())

  return true;

  return false;

  }

  //friend function overload > operator

  friend bool operator>(Complex &a,Complex &b)

  {

  if(a.modulus()>b.modulus())

  return true;

  return false;

  }
};
#endif
