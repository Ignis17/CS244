// Author: Joel Turbi
// Creation: 12/05/2017
// Description: Exam 3

#include "Complex.h"
#include <iostream>

int main()
{
  Complex first(4,9);
  Complex second(3,8);

  Complex *difference;
  difference = Difference(first,second);
  cout << "Difference: " << difference->ToString() << "\n\n";

  Complex *addition;
  addition = Sum(first,second);
  cout << "Sum: " << addition->ToString() << "\n\n";

  Complex *product;
  product=Product(first,second);
  cout << "Product: " << product->ToString() << "\n\n";

  Complex *quotient;
  quotient = Quotient(first,second);
  cout << "Quotient: " << quotient->ToString() << "\n\n";

  first.Complement();
  cout << "Complement of one: " << first << "\n\n";

  bool isEqual=(first==second);
  if(isEqual)
  {
    cout << "One is equal to two\n";
  }

  else
  {
    cout << "One is not equal to two\n";
  }

  cout << "\nOne: " << first << "\n\nTwo: " << second << "\n";
  cout << "\nModulus of one is: " << first.Modulus() << "\n\n";
  cout << "\nModulus of two is: " << second.Modulus() << "\n\n";
  cin.get();
  return 0;
}
