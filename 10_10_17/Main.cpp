#include "squares.h"
#include <iostream>
using namespace example;

int main()
{
  Square1 sq1; // Invoking the default constructor of Square1
  Square2 sq2; // Invoking the default constructor f Square2

  // Objects created using Overloaded constructors
  Square1 sq3(5);
  Square2 sq4(4);

  std::cout << sq3.Perimeter() << " " << sq4.ToString();
  std::cout << "\n";

  return 0;
}
