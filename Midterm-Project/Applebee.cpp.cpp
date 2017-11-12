#include <iostream>
#include <iomanip>

using namespace std;
void showMenu();
void showComboPack();
void displayBill(float bill, float totalBill, float tip, float taxDue);
void displayChange(float amtTendered, float amtChangeDue);
float bill,
      totalBill,
      amtTendered,
      amtChangeDue,
      taxDue,
      tipDue;

void showMenu()
{
  cout <<  "1 Two Caesar Side Salads " << endl;
  cout <<  "2 Spinach + Artichoke Dip " << endl;
  cout <<  "3 Crunchy Onion Rings " << endl;
  cout <<  "4 Boneless Wings " << endl;
  cout <<  "5 Mozzarella Sticks " << endl;
  cout <<  "6 Chicken Tenders Basket " << endl;
  cout <<  "7 Oriental Chicken Salad " << endl;
  cout <<  "8 Firecracker Shrimp Cavatappi " << endl;
  cout <<  "9 The American Standard " << endl;
  cout <<  "10 Blackened Tilapia " << endl;
  cout <<  "11 Whisky Bacon Burger " << endl;
  cout <<  "12 Double-Glazed Baby Back Ribs - Half Rack " << endl;
  cout <<  "13 Cedar Grilled Lemon Chicken " << endl;
  cout <<  "14 Fiesta Lime Chicken " << endl;
  cout <<  "15 Three-Cheese Chicken Cavatappi " << endl;
  cout <<  "16 End of order " << endl;
}

  void displayChange(float &amtTendered, float amtChangeDue)
  {
    cout << " Enter amounr Tendered " <<endl;
    cin >> amtTendered;

    if(amtTendered <(totalBill+tipDue+taxDue))
    {
      cout << " Please enter enough to cover total bill: " << endl;
      cin >> amtTendered;
    }
    else
    {
      amtChangeDue = totalBill - amtTendered;
      cout << "Change Due: $" << amtChangeDue << endl;
    }
  }
int main()
{
  if (choice == 1)
  {
    void showComboPack();
    cout << " Two entrees + one appetizer = $20 "<< endl;
    cin >>
  }

}
