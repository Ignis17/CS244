// Name: Joel Turbi
// Version: Assignment 4 - Triangles
// Creation: 11/16/2017
#include <iostream>
#include "Triangle.h"
using namespace std;

int main()
{
  // Creating Three Triangle class instances
  Triangle tri1(2, 4, 8);
  Triangle tri2(3, 5, 7);
  Triangle tri3(4, 2, 6);


  // Calling Stats()
  cout<<"Triangle#1"<<endl;
  cout << tri1.Stats(tri1) << endl;
  cout<<"Triangle#2"<<endl;
  cout << tri2.Stats(tri2) << endl;
  cout<<"Triangle#3"<<endl;
  cout << tri3.Stats(tri3) << endl;

  return 0;
}
