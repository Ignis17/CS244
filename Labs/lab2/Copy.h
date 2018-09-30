//Team: Ignis
//Author: Joel Turbi, Christopher Williams, Luis Casado.
//Creation: <Date>
#ifndef COPY_H
#define COPY_H

#include "Archive.h"

namespace lab2
{
	TicTacToe::TicTacToe(const TicTacToe& other)
	{
		for(int i = 0;i < 9; i++)
		{
			board[i] = other.board[i];
		}
		player = other.player;
	}
};
#endif
