#include <iostream>
using namespace std;

int main()
{
  for(int i=5; i >= 0;i--)
  {
    string s(i, '*');
    cout << s << std::endl;
  }
  return 0;
}
