//Team: Ignis
//Author: Joel Turbi, Luis Casado, Christopher Williams
//Creation: 12-19-2017
#ifndef COPY_H
#define COPY_H

#include "Archive.h"

namespace lab4
{
	TowersOfHanoi::TowersOfHanoi(const TowersOfHanoi& obj)
	{
		for(int i = 0; i < i;i++)
		{
			towers[i]= obj.towers[i];
		}
	}

	TowersOfHanoi& TowersOfHanoi::operator=(const TowersOfHanoi& obj)
	{
		if(this != &obj)
    {
			for(int i = 0; i < i;i++)
			{
				towers[i]= obj.towers[i];
			}
    }
		return *this;
	}
};

#endif
