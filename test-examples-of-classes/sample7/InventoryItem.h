// Specification file for the InventoryItem class.
#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H
#include <cstring>  // Needed for strlen and strcpy

// InventoryItem class declaration.
class InventoryItem
{
  private:
    char *description;  // The item description
    double cost;        // The item cost
    int units;          // Number of units on hand
  public:
    // Constructor
    InventoryItem(char *desc, double c, int u)
    {
      // Allocate just enough memory for the description.
      description = new char [strlen(desc)+1];

      // Copy the description to the allocated memory.
      strcpy(description, desc);

      // Assign values to cost and units.
      cost = c;
      units = u;
    }
    //Destructor
    ~InventoryItem()
    { delete [] description;}
    const char *getDescription() const
    {return description;}
    double getCost() const
    {return cost;}
    int getUnits() const
    {return units;}
};
#endif
