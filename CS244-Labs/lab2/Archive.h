#ifndef ARCHIVE_H
#define ARCHIVE_H

#include <string>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <ctime>

namespace lab2
{
	class TicTacToe
	{
		public:
		char board[9];
		static const char TOKENS[2];
		int player;
		TicTacToe();
		TicTacToe(const TicTacToe& other);
		TicTacToe& operator=(const TicTacToe& rhs);
		bool verticalWinner() const;
		bool horizontalWinner() const;
		bool diagonalWinner() const;
		bool winner() const;
		bool hasMove() const;
		bool canPlay() const;
		void switchPlayer();
		bool makeMove(int position);
		std::string ToString() const;
	};
	
	const char TicTacToe::TOKENS[2] = {'O','X'};
}

#endif
