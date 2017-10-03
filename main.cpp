#include "class.h"
using namespace Exercises;

int main()
{
  Exercise ex; // Exercises object
  ex.x = 3; // x field of object ex
  ex.y = "Hello"; // y field of object ex

  ex.print(); // print() method of object ex

  std:: cout << "\n";
  std:: cout << ex.mult() << "\n";
  return 0;
}
