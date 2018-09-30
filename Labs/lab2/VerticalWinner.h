//Team: Ignis
//Author: Joel Turbi, Luis Casado, Christopher Williams
//Creation: 12/06/2017
#ifndef VERTICALWINNER_H
#define VERTICALWINNER_H

#include "Archive.h"

namespace lab2
{
	bool TicTacToe::verticalWinner() const
	{
		for (int i=0; i < 3; i++)
		{
			if(board[i] == board[i+3] && board[i] == board[i+6] && board[i] != '-')
			{
				return true;
			}
		}
		return false;
	}
};
#endif
