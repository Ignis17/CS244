#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
  Rectangle box;  // Define an instance of the Rectangle class
  double rectWidth;  // Local variable for width
  double rectLength;   // Local variable for length

  // Get the rectangle's width and length from the user.
  cout << "This program will calculate the area of a rectangle." << endl;
  cout << "What is the width? \n";
  cin >> rectWidth;
  cout << "What is the length? \n";
  cin >> rectLength;

  // Store rge width and length of the rectangle in the box object.
  box.setWidth(rectWidth);
  box.setLength(rectLength);

  //Display the rectangle's data.
  cout << "Here is the rectangle's data: \n";
  cout << "Width: " << box.getWidth() << endl;
  cout << "Length: " << box.getLength() << endl;
  cout << "Area: " << box.getArea() << endl;

  return 0;
}