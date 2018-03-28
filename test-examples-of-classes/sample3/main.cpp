#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
  double number;      // To hold a number
  double totalArea;   // The total area
  Rectangle *kitchen;  // To point to kitchen dimensions
  Rectangle *bedroom;  // To point to bedroom dimensions
  Rectangle *den;      // To to point to den dimensions
  // Dynamically allocate the objects.
  kitchen = new Rectangle;
  bedroom = new Rectangle;
  den = new Rectangle;

  // Get the kitchen dimensions.
  cout << "What is the kitchen's length? ";
  cin >> number;                            // Get the length
  kitchen->setLength(number);                // Store in kitchen object
  cout << "What is the kitchen's width? ";
  cin >> number;                           // Get the width
  kitchen->setWidth(number);                // Store in kitchen object

  // Get bedroom dimensions.
  cout << "What is the bedroom's length? ";
  cin >> number;                            // Get the length
  bedroom->setLength(number);                // Store in bedroom object
  cout << "What is the bedroom's width? ";
  cin >> number;                           // Get the width
  bedroom->setWidth(number);                // Store in bedroom object

  // Get den dimensions.
  cout << "What is the den's length? ";
  cin >> number;                       // Get the length
  den->setLength(number);               // Store in den object
  cout << "What is the den's width? ";
  cin >> number;                       // Get the width
  den->setWidth(number);                // Store in den object

  // Calculate the total area of the three rooms.
  totalArea = kitchen->getArea() + bedroom->getArea() + den->getArea();

  // Display the total area of the three rooms.
  cout << "The total area of the three rooms is " << totalArea << endl;

  // Delete the objects from memory.
  delete kitchen;
  delete bedroom;
  delete den;
  kitchen = 0; // Make kitchen point to null.
  bedroom = 0; // Make bedroom point to null.
  den = 0;     // Make den point to null.

  return 0;
}
