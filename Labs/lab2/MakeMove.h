//Team: Ignis
//Author: Joel Turbi, Luis Casado, Christopher Williams
//Creation: 12/06/2017
#ifndef MAKEMOVE_H
#define MAKEMOVE_H

#include "Archive.h"

namespace lab2
{
	bool TicTacToe::makeMove(int position)
	{
		if(position >= 1 && position <=9)
		{
		if(board[position-1] == '-')
		{
			 board[position-1] = TOKENS[player-1];
			return true;
		}
	}
		return false;
	}
};
#endif
