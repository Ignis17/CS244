#include <iostream>
using namespace std;

int main()
{
  int x = 15; // int variable
  int *ptr;   // Pointer variable, can point to an int

  ptr = &x;

  // Use both x and ptr to display the value in x.
  cout << "Here is the value in x, printed twice:\n";
  cout << x << endl; // Displays the contents of x
  cout << *ptr << endl; // Displays the contents of x

  // Assign 100 to the location pointed to by ptr. This will actually
  // assign 100 to x.
  *ptr = 200;

  // Use both x and ptr to display the value in x.
  cout << "Once again, here is the value in x:\n";
  cout << x << endl; // Displays the contents of x.
  cout << *ptr << endl; // Displays the contents of x.
  return 0;

}
