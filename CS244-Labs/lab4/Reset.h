//Team: Ignis
//Author: Joel Turbi, Luis Casado, Christopher Williams
//Creation: 12-19-2017
#ifndef RESET_H
#define RESET_H

#include "Archive.h"

namespace lab4
{
	void TowersOfHanoi::Reset()
	{
		for(int i = 3;i > 0;i -= 1)
		{
			towers[0].Add(i);
		}
	}
}

#endif
