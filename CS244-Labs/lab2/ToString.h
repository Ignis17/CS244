//Team: Ignis
//Author: Joel Turbi, Luis Casado, Christopher Williams
//Creation: 12/06/2017
#ifndef BOARD_H
#define BOARD_H

#include "Archive.h"

namespace lab2
{
	std::string TicTacToe::ToString() const
	{
		std::stringstream out;

		out << "Player " << player << "\n\n";
		out << board[0] << " " << board[1] << " " << board[2] << "\n";
		out << board[3] << " " << board[4] << " " << board[5] << "\n";
		out << board[6] << " " << board[7] << " " << board[8] << "\n";
		return out.str();
	}
}
#endif
