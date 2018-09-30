//Team: Ignis
//Author: Joel Turbi, Luis Casado, Christopher Williams
//Creation: 12/06/2017
#ifndef WINNER_H
#define WINNER_H

#include "Archive.h"

namespace lab2
{
	bool TicTacToe::winner() const
	{
		return (verticalWinner() == true || horizontalWinner() == true || diagonalWinner() == true);
	}
}

#endif
