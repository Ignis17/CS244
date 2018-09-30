//Team: Ignis
//Author: Joel Turbi, Luis Casado, Christopher Williams
//Creation: 12-19-2017
#ifndef MOVE_H
#define MOVE_H

#include "Archive.h"

namespace lab4
{
	bool TowersOfHanoi::Move(int from,int to)
	{
		if(from >= 0 && from <= 2 && to >= 0 && to <= 2)
		{
			towers[to] = towers[from];
			return true;
		}
		return false;
	}
}

#endif
