//Team: Ignis
//Author: Joel Turbi, Luis Casado, Christopher Williams
//Creation: 12/06/2017
#ifndef INITIALIZE_H
#define INITIALIZE_H

#include "Archive.h"

namespace lab2
{
	TicTacToe::TicTacToe()
	{
		for(int i = 0;i < 9; i++)
		{
			board[i] = '-';
		}
		player = 1;
	}
};
#endif
