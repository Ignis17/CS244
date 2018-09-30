//Lab 2 : Tic Tac Toe
//Team: Ignis
//Author: Joel Turbi, Luis Casado, Christopher Williams
//Creation: 12/06/2017
#include "Repository.h"
#include <fstream>
using namespace std;

void PlayGame()
{
	TicTacToe game;
	int values = 9;
	int position;
	int choices[9];

	initArray(choices);

	cout << "Player 1 (O) => User\nPlayer 2 (X) => Computer\n";
	cout << "Board Positions\n";
	cout << "1 2 3\n4 5 6\n7 8 9\n\n";

	while(game.canPlay())
	{
		cout << "\n" << game.ToString();

		if(game.player == 1)
		{
			cout << "Select position: ";
			cin >> position;

			while(!game.makeMove(position))
			{
				cout << "The position is unavailable\nSelect another position: ";
				cin >> position;
			}
		}
		else
		{
			do {
				position = canWin(game);

				if(position == -1)
					position = randomChoice(choices,values);
				else
					position += 1;
				cout << position << "\n";
			} while(!game.makeMove(position));
		}

		removeChoice(choices,values,position);
		game.switchPlayer();
	}

	if(game.winner())
	{
		game.switchPlayer();
		cout << "Player " << game.player << " won!\n";
	}
	else
	{
		cout << "Game ended in a draw.\n";
	}
}

int main()
{
	if(Tester())
	{
		srand(time(NULL));
		PlayGame();
	}

	return 0;
}
