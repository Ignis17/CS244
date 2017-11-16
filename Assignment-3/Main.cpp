// Name: Joel Turbi
// Version: Assignment 3
// Creation: 11/16/2017
#include "Parallelogram.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  Parallelogram firstParallelogram;
  Parallelogram secondParallelogram;
  Parallelogram thirdParallelogram;
  Parallelogram fourthParallelogram;

  firstParallelogram = Parallelogram();
  secondParallelogram = Parallelogram(5.0,8.0);
  thirdParallelogram = Parallelogram(6.0,12.0,45.0);
  fourthParallelogram = Parallelogram(10.0,10.0,60.0);

  cout << setprecision(1) << fixed << showpoint;
  cout << firstParallelogram.ToString() << setw(17) <<" perimeter: "
       << firstParallelogram.Perimeter() << setw(8)<< " area: "
       << firstParallelogram.Area() << setw(9) << " minor: "
       << firstParallelogram.MinorDiagonal() << setw(9) << " major: "
       << firstParallelogram.MajorDiagonal() << "\n";

  cout << secondParallelogram.ToString() << setw(14) << " perimeter: "
       << secondParallelogram.Perimeter() << " area: "
       << secondParallelogram.Area() << " minor: "
       << secondParallelogram.MinorDiagonal() << setw(9)<< " major: "
       << secondParallelogram.MajorDiagonal() << "\n";

  cout << thirdParallelogram.ToString() << setw(15) << " perimeter: "
       << thirdParallelogram.Perimeter() << " area: "
       << thirdParallelogram.Area() << " minor: "
       << thirdParallelogram.MinorDiagonal() << setw(9) << " major: "
       << thirdParallelogram.MajorDiagonal() << "\n";

  cout << fourthParallelogram.ToString() << setw(14) << " perimeter: "
       << fourthParallelogram.Perimeter() << " area: "
       << fourthParallelogram.Area() << " minor: "
       << fourthParallelogram.MinorDiagonal() << " major: "
       << fourthParallelogram.MajorDiagonal() << "\n";
  return 0;
}
