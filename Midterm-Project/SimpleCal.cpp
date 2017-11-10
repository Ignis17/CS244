// Name: Joel Turbi
// Description: Simple Calculator
// Due Date: 11/08/2017

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include<cstdlib>
using namespace std;

class Calculator
{
  public:
    double Addition(const double &x, const double &y)
    {
      return (x + y);
    }

    double Subtraction(const double &x, const double &y)
    {
      return (x - y);
    }

    double Multiplication(const double &x, const double &y)
    {
      return (x * y);
    }

    double Division(const double &x, const double &y)
    {
      return (x / y);
    }
    double Power(const double &x, const double &y)
    {
      return pow(x,y);
    }
};

void Menu(int& operat0r, fstream& file)
{
  // Display Menu to user.
  cout << "\n:: Welcome to Simple Calculator :: \n";
  cout << "\nWhat function do you want to use? \n";
  cout << "1 - Addition " << endl;
  cout << "2 - Subtraction " << endl;
  cout << "3 - Multiplication " << endl;
  cout << "4 - Division " << endl;
  cout << "5 - Power " << endl;
  cout << "6 - End Calculator " << endl;
  cout << "Input: " << endl;
  // Print to log.txt
  file << "\n:: Welcome to Simple Calculator :: \n";
  file << "\nWhat function do you want to use? \n";
  file << "1 - Addition " << endl;
  file << "2 - Subtraction " << endl;
  file << "3 - Multiplication " << endl;
  file << "4 - Division " << endl;
  file << "5 - Power " << endl;
  file << "6 - End Calculator " << endl;
  file << "Input: " << endl;

  // Get choice from user.
  cin >> operat0r;
  cout << endl;
  file << operat0r;
  file << endl;
}

int main()
{
  int choice;
  do
  {
    Calculator key; //Object
    int x, y;
    fstream file = fstream("log.txt",ios::out|ios::app);
    Menu(choice,file);


    switch(choice)
    {
      case 1: //Addition
        cout << "**ADDITION**" << endl;
        cout << "Please enter first number: " << endl;
        cin >> x;
        cout << "Please enter second number: " << endl;
        cin >> y;
        cout << x << " + " << y << " = ";
        cout << key.Addition(x, y) << endl;
        // Print to log.txt
        file << "**ADDITION**" << endl;
        file << "Please enter first number: " << endl;
        file << x << endl;
        file << "Please enter second number: " << endl;
        file << y << endl;
        file << x << " + " << y << " = ";
        file << key.Addition(x, y) << endl;
        break;
      case 2: //Subtraction
        cout << "**SUBTRACTION**" << endl;
        cout << "Please enter first number: " << endl;
        cin >> x;
        cout << "Please enter second number: " << endl;
        cin >> y;
        cout << x << " - " << y << " = ";
        cout << key.Subtraction(x, y) << endl;
        // Print to log.txt
        file << "**SUBTRACTION**" << endl;
        file << "Please enter first number: " << endl;
        file << x << endl;
        file << "Please enter second number: " << endl;
        file << y << endl;
        file << x << " - " << y << " = ";
        file << key.Subtraction(x, y) << endl;
        break;
      case 3: //Multiplication
        cout << "**MULTIPLICATION**" << endl;
        cout << "Please enter first number: " << endl;
        cin >> x;
        cout << "Please enter second number: " << endl;
        cin >> y;
        cout << x << " x " << y << " = ";
        cout << key.Multiplication(x, y) << endl;
        // Print to log.txt
        file << "**MULTIPLICATION**" << endl;
        file << "Please enter first number: " << endl;
        file << x << endl;
        file << "Please enter second number: " << endl;
        file << y << endl;
        file << x << " x " << y << " = ";
        file << key.Multiplication(x, y) << endl;
        break;
      case 4: //Division
        cout << "**DIVISION**" << endl;
        cout << "Please enter first number: " << endl;
        cin >> x;
        cout << "Please enter second number: " << endl;
        cin >> y;
        cout << x << " / " << y << " = ";
        cout << key.Division(x, y) << endl;
        if(y==0)
        {
          cout << "!!Error!! Cannot divide by zero.\n";
        }
        // Print to log.txt
        file << "**DIVISION**" << endl;
        file << "Please enter first number: " << endl;
        file << x << endl;
        file << "Please enter second number: " << endl;
        file << y << endl;
        file << x << " / " << y << " = ";
        file << key.Division(x, y) << endl;
        if(y == 0)
        {
          file << "Cannot divide by zero.\n";
        }
        break;
        case 5: // Power
        cout << "**Power**" << endl;
        cout << "Please enter base: " << endl;
        cin >> x;
        cout << "Please enter exponent: " << endl;
        cin >> y;
        cout << x << " ^ " << y << " = ";
        cout << key.Power(x, y) << endl;
        // Print to log.txt
        file << "**Power**" << endl;
        file << "Please enter base: " << endl;
        file << x << endl;
        file << "Please enter exponent: " << endl;
        file << y << endl;
        file << x << " ^ " << y << " = ";
        file << key.Power(x, y) << endl;
        break;
      case 6:
        cout << "Ending Calculator...\n";
        file << "Ending Calculator...\n";
        break;
      default:
        cout << "Invalid Input.\n";
        file << "Invalid Input.\n";
        break;
    }file.close();
  }while(choice!= 6);
  return 0;
}
