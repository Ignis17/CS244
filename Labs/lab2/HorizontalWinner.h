//Team: Ignis
//Author: Joel Turbi, Luis Casado, Christopher Williams
//Creation: 12/06/2017
#ifndef HORIZONTALWINNER_H
#define HORIZONTALWINNER_H

#include "Archive.h"

namespace lab2
{
	bool TicTacToe::horizontalWinner() const
	{
		for (int i=0; i < 3; i++)
		{
			if(board[3*i] == board[3*i+1] && board[3*i] == board[3*i+2] && board[3*i] != '-')
			{
				return true;
			}
		}
		return false;
	}
}

#endif
