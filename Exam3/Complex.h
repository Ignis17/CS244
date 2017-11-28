#ifndef COMPLEX_H
#define COMPLEX_H

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
    this->imaginary = 0;
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
    this->real = rhs.real;
    this->imaginary = rhs.imaginary;
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
    real = real;
  }
  void SetImaginary(double imaginary)
  {
    imaginary = imaginary;
  }

};
#endif
