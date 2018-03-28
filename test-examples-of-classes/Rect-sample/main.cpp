#include "Rect.h"
#include <iostream>
using namespace std;
int main()
{
  Rect house(12, 12);

  cout << "Width: " <<  house.getWitdh() << endl;
  cout << "Length: " << house.getLength() << endl;
  cout << "Area: " << house.getArea() << endl;
  return 0;
}
