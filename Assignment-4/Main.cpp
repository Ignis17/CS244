// Name: Joel Turbi

#include <iostream>
#include "Triangle.h"
using namespace std;

int main()
{
  // Creating Three Triangle class instances
  Triangle t1(3, 4, 5);
  Triangle t2(4, 5, 6);
  Triangle t3(5, 6, 7);

  // calling the stats functions
  cout<<"Triangle#1"<<endl;
  cout << t1.Stats(t1) << endl;
  cout<<"Triangle#2"<<endl;
  cout << t2.Stats(t2) << endl;
  cout<<"Triangle#3"<<endl;
  cout << t3.Stats(t3) << endl;

  return 0;
}
