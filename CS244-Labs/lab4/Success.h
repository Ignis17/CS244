//Team: Ignis
//Author: Joel Turbi, Luis Casado, Christopher Williams
//Creation: 12-19-2017
#ifndef SUCCESSFUL_H
#define SUCCESSFUL_H

#include "Archive.h"

namespace lab4
{
	bool TowersOfHanoi::Success() const
	{
		if(towers[2] == towers[1] && towers[2] == towers[0]){return true;}
		else
			return false;
	}
}

#endif
