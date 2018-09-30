//Team: Ignis
//Author: Joel Turbi, Luis Casado, Christopher Williams
//Creation: 12/06/2017
#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

#include "Archive.h"

namespace lab2
{
	TicTacToe& TicTacToe::operator=(const TicTacToe& rhs)
	{
		for(int i = 0;i < 9; i++)
		{
			this->board[i] = rhs.board[i];
		}
		this->player = rhs.player;
		return *this;
	}
};
#endif
