// Author: Joel Turbi
//
//
#include "Complex.h"
#include <iostream>

int main()
{
  Complex one(2,5);
  Complex two(1,3);
  Complex *diff;
  diff=difference(one,two);//1+2i

  cout<<"Difference : "<<diff->ToString()<<endl;

  Complex *sum_;
  sum_=sum(one,two);

  cout<<"Sum : "<<sum_->ToString()<<endl;

  Complex *pro;
  pro=product(one,two);

  cout<<"Product : "<<pro->ToString()<<endl;
  Complex *quo;
  quo=quotient(one,two);

  cout<<"Quotient : "<<quo->ToString()<<endl<<endl;

  //complement one
  one.Complement();

  cout<<"Complement of one : "<<one<<endl<<endl;

  bool isEqual=(one==two);
  if(isEqual)
  {
    cout<<"one is equal to two"<<endl;
  }
  else
  {
    cout<<"one is not equal to two"<<endl;
  }

  cout<<endl<<"One : "<<one<<endl<<"Two : "<<two<<endl;
  cout<<endl<<"Modulus of one is : "<<one.modulus()<<endl<<endl;
  cout<<endl<<"Modulus of two is : "<<two.modulus()<<endl<<endl;
  cin.get();
  return 0;
}
