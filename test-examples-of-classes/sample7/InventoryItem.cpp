// This program demonstrate a class with a destructor.
#include <iostream>
#include <iomanip>
#include "InventoryItem.h"
using namespace std;

int main()
{
  // Define and InventoryItem object with the following data:
  // description: Wrench Cost: 8.75 Unit on hand: 20
  InventoryItem stock("Wrench", 8.75, 20);

  // Set numeric output formatting.
  cout << setprecision(2) << fixed << showpoint;

  // Display the object's data:
  cout << "Item Description: " << stock.getDescription() << endl;
  cout << "Cost: " << stock.getCost() << endl;
  cout << "Units on hand: " << stock.getUnits() << endl;
  return 0;
}
