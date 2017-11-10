//Team: <Team Name>
//Author: <Names>
//Creation: <Date>
#ifndef INITIALIZE_H
#define INITIALIZE_H

#include "Archive.h"

namespace lab2
{
	TicTacToe::TicTacToe()
	{
		for(int i = 0;i < 9;i += 1)
		{
			board[i] = '-';
		}
		int player = 1;
	}
}

#endif
