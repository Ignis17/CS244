// Name: Joel Turbi
// Version: Assignment 6
// Creation: 11/24/2017

#include "Fraction.h"

int main()
{
  try
  {
    // Create a Fraction object
    Fraction ob1(3, 4);
    cout<<"ob1 : "<<ob1.Decimal()<<endl;

    // Create a Fraction object
    Fraction ob2(3, 4);
    Fraction add;
    add = ob1.Sum(ob2);
    cout<<"\nSum : "<<add.GetNumerator()<<" / "<<add.GetDenominator()<<endl;

    // Create a Fraction object
    Fraction ob3(3, 4);

    // Create a Fraction object
    Fraction ob4(3, 4);
    Fraction subt;
    ob3.Difference(ob4);
    cout<<"\nDifference : "<<subt.ToString()<<endl;

    // Create a Fraction object
    Fraction ob5(3, 4);

    // Create a Fraction object
    Fraction ob6(3, 4);
    Fraction mult = ob5.Product(ob6);
    cout<<"\nProduct : "<<mult.ToString()<<endl;

    // Create a Fraction object
    Fraction ob7(3, 4);

    // Create a Fraction object
    Fraction ob8(3, 4);
    Fraction div;
    div = ob7.Quotient(ob8);
    cout<<"\nDivision : "<<div.ToString()<<endl;
  }
  catch(string str)
  {
    cout<<str;
  }
  return 0;
}
