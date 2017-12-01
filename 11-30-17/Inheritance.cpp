#include <iostream>

using namespace std;

class A
{
public:
  A(){cout << "A is created\n";}
  ~A(){cout << "A is destroyed\n";}
};
class B:public A
{
public:
  B(){cout << "B is created\n";}
  ~B(){cout << "B is destroyed\n";}
};
int main()
{
  B b;
  return 0;
}
