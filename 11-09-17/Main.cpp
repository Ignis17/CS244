#include "Time.h"
#include <iostream>
using namespace std;
using namespace ws3;

int main()
{

	//Using an anonymous object to display
	//the time at midnight
	cout << Time().ToString() << "\n";
	Time t;
  t.SetHour(16);
	t.SetMinute(57);
	t.SetSecond(0);
	cout << t << "\n";
	cout << "Hour: " << t.GetHour() << "\n" << "Minute: " << t.GetMinute() << "\n"
			 << "Second: " << t.GetSecond() << "\n";
	return 0;
}
