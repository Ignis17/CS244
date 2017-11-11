// Name: Joel Turbi
// Description: Simple Calculator
// Due Date: 11/08/2017

#include <iostream>
#include <string>
#include "SimpleCal.h"
#include <fstream>

using namespace std;

// Displays Menu to user
void Menu()
{
  cout << "\n\n\t\t:: Welcome to Simple Calculator :: \t\t\n\n";
  cout << "Enter the expression in the form as follows: " << endl;
  cout << "<operand> <operator> <operand>" << endl;
}

void Calculation()
{
  Calculator key;
  float x=0, y=0;
  string x1, y2, z;
  char choice = ' ';

  // fstream declaration to create log.txt file and write to it.
  fstream file("log.txt",ios::out|ios::trunc);

  // Call Menu() function to display Menu to user.
  Menu();

  // Read input from user.
  cin >> x1 >> z >> y2;

  // Check for ';' at the end of y.
  size_t terminate = y2.find(';');

  // convert expression given by y from string to a floating value.
  x = stof(x1);

  // loop until ';' is entered.
  do
  {
    choice  = z.at(0);

    if(terminate!=-1)
    {
      y = stof(y2.substr(0,terminate));
    }
    else
    {
      y = stof(y2);
    }

    // Display the value of the first opearand.
    cout << x << " ";
    // Write to log.txt
    file << x << " ";

    switch(choice)
    {
      case '+': //Addition
        x = key.Addition(x,y);
        break;
      case '-': //Subtraction
        x = key.Subtraction(x,y);
        break;
      case '*': //Multiplication
        x = key.Multiplication(x,y);
        break;
      case '/': //Division
        if(y==0)
        {
          cout << "!!Error!! Cannot divide by zero.\n";
          file << "!!Error!! Cannot divide by zero.\n";
        }
        else
          x = key.Division(x,y);
        break;
        case '^': // Power
          x = key.Power(x,y);
        break;
      }
      // Display result.
      cout << choice << " " << y << " = " << x << endl;

      // Write result to log.txt
      file << choice << " " << y << " = " << x << endl;

      if(terminate!=-1)
      {
        break;
      }
      else
        cout << x << " ";
        cin >> z >> y2;
        // Look for ';' once more.
        terminate = y2.find(';');
  } while(true);
  // Close fstream file.
  file.close();
}

int main()
{
  Calculation();
  return 0;
}
