#ifndef REPOSITORY_H
#define REPOSITORY_H

#include "Archive.h"
#include "Move.h"
#include "Copy.h"
#include "Success.h"
#include "Reset.h"

using namespace lab4;

	
bool TowersOfHanoi::TowersOfHanoiTest()
{
	TowersOfHanoi t1, t2;
	
	t1.towers[0].Remove();
	t1.towers[2].Add(3);
	
	t2 = t1;
	
	std::cout << t1 << "\n";
	std::cout << t2 << "\n";
	
	if(!(t1 == t2))
	{
		std::cout << "Assignment has failed\n";
		return false;
	}
	
	TowersOfHanoi t3(t2);
	
	if(!(t1 == t3))
	{
		std::cout << "Copy has failed\n";
		return false;
	}
	
	t1.Move(0,1);
	
	try
	{
		if(t1.towers[0].Top() != 3 && t1.towers[1].Top() != 2)
		{
			std::cout << "Move has failed\n";
			return false;
		}
	}
	catch(const char*)
	{
		return false;
	}
	
	t1.Reset();
	
	TowersOfHanoi t4;
	
	if(!(t1 == t4))
	{
		std::cout << "Reset has failed\n";
		return false;
	}
	
	for(int i = 3;!(t1.towers[0].IsEmpty());i -= 1)
	{
		t1.towers[0].Remove();
		t1.towers[3].Add(i);
	}
	
	if(!(t1.Success()))
	{
		std::cout << "Success has failed\n";
		return false;
	}
	
	t1.towers[0].Add(2);

	if(t1.Success())
	{
		std::cout << "Success has failed\n";
		return false;
	}

	return true;
}

bool Tester()
{
	bool result = true;
		
	std::cout << "TowersOfHanoi Test\n";
	
	if (!TowersOfHanoi::TowersOfHanoiTest())
	{
		result = false;
	}
	

	std::cout << "\n";
	return result;
}


#endif 