// Name: Joel
//
//
#include "Clock.h"
#include <iostream>

int main()
{
  Clock tick(2400);
  Clock tock;

  tock.SetHours(12);
  tock.SetMinutes(12);
  tock.SetSeconds(12);

  while(true)
  {
    tick.Tick();
    tock.Tick();

    cout << tick.ToString() << " " << tock.ToString() << endl;
  }
  cout << tick.ToString();
  return 0;
}
