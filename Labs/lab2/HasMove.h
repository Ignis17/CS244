//Team: Ignis
//Author: Joel Turbi, Luis Casado, Christopher Williams
//Creation: 12/06/2017
#ifndef HASMOVE_H
#define HASMOVE_H

#include "Archive.h"

namespace lab2
{
	bool TicTacToe::hasMove() const
	{
		for(int i=0; i < 9; i++)
		{
				if(board[i] == '-')
				{
					return true;
				}
		}
		return false;
	}
};

#endif
