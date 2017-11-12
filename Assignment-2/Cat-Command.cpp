//  Name: Joel Turbi
//  Version: Assignment 2
//  Description:  This program copies a file's content and displays
//  it; which is, similar to the cat command in Linux.
#include <iostream>
#include <fstream>  // Needed to read from file.
#include <string>
#include <cctype> // Needed for the toupper function.

using namespace std;

// Function Name:   CopyFile()
// Parameter(s): filename:string
// Return: string
// Description: It should try to open the file, filename, for reading.
// If it does not open or does not exists, return an empty string.
// Otherwise, copy the file to a string and return the string.
string CopyFile(string filename)
{
  const int SIZE = 100; // Size of input array
  char input[SIZE];     // To hold file input
  fstream file;

  // Open the file in input mode
  file.open("msg.txt",ios::in);
  if(!file)
  {
    filename = " ";
  }
  // Read the file contents.
  file.getline(input,SIZE); // Use \n as a delimiter.
  while(!file.eof())
  {
    cout << input << endl;
    file.getline(input,SIZE);
  }
  // Close the file.
  file.close();
  return filename;
}

//  Function Name: FormattedCopyFile()
//  Parameter(s): filename:string
//  Return: string
//  Description: It should function similar to CopyFile() except
//  that the content shoudl be capitalized.
string FormattedCopyFile(string filename)
{
  const int SIZE = 100; // Size of input array
  char input[SIZE];     // To hold file input
  fstream file;

  // Open the file in input mode
  file.open("msg.txt",ios::in);
  if(!file)
  {
    filename = " ";
  }
  // Read the file contents.
  file.getline(input,SIZE); // Use \n as a delimiter.
  while(!file.eof())
  {
    for(size_t i=0; i < SIZE;i++)
    {
      input[i] = toupper(input[i]);
    }
    cout << input << endl;
    file.getline(input,SIZE);
  }
  // Close the file.
  file.close();
  return filename;
}

int main()
{
  string fileOfChoice;
  cout << "Enter a filename: ";
  cin >> fileOfChoice;
  if(fileOfChoice == "msg.txt")
  {
    cout << endl;
    CopyFile(fileOfChoice);
    cout << endl;
    FormattedCopyFile(fileOfChoice);
  }
  return 0;
}
