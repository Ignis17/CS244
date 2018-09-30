//Team: Ignis
//Author: Joel Turbi, Luis Casado, Christopher Williams
//Creation: 12/06/2017
#ifndef DIAGONALWINNER_H
#define DIAGONALWINNER_H

#include "Archive.h"

namespace lab2
{
	bool TicTacToe::diagonalWinner() const
	{

		return ((board[0] == board[4] && board[0] == board[8] && board[0] != '-') ||
			(board[2] == board[4] && board[2] == board[6] && board[2] != '-'));

	}
};
#endif
