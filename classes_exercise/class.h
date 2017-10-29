#ifndef SAMPLE_H
#define SAMPLE_H
#include <iostream>
#include <string>

namespace Exercises
{
  class Exercise
  {
    public:
    int x;
    std::string y;

    void print()
    {
      std::cout << x << " " << y;
    }
    std::string mult()
    {
    std::string result = " ";
    for(int i = 0; i < x; i++)
    {
      result +=y;
    }
    return result;
    }
  };
}
#endif
