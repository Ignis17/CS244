#ifndef REPOSITORY_H
#define REPOSITORY_H

#include "Initialization.h"
#include "VerticalWinner.h"
#include "HorizontalWinner.h"
#include "DiagonalWinner.h"
#include "Winner.h"
#include "HasMove.h"
#include "MakeMove.h"
#include "Copy.h"
#include "Assignment.h"
#include "SwitchPlayer.h"
#include "ToString.h"
#include "CanPlay.h"
using namespace lab2;
	
bool InitializeTest()
{
	TicTacToe game;
	
	for(int i = 0;i < 9;i += 1)
	{
		if(game.board[i] != '-')
		{
			return false;
		}
	}
	
	if(game.player != 1)
	{
		return false;
	}
	
	return true;
}

bool CopyTest()
{
	TicTacToe game;
	
	for(int i = 0;i < 3;i += 1)
	{
		game.board[rand() % 9] = TicTacToe::TOKENS[1];
	}
	
	game.player = rand() % 2 + 1;
	
	TicTacToe copyGame(game);

	for(int i = 0;i < 9;i += 1)
	{
		if(game.board[i] != copyGame.board[i])
		{
			return false;
		}
	}
	
	if(game.player != copyGame.player)
	{
		return false;
	}
	
	return true;
}

bool AssignmentTest()
{
	TicTacToe game, copyGame;
	
	for(int i = 0;i < 3;i += 1)
	{
		game.board[rand() % 9] = TicTacToe::TOKENS[1];
	}
	
	game.player = rand() % 2 + 1;
	
	copyGame = game;

	for(int i = 0;i < 9;i += 1)
	{
		if(game.board[i] != copyGame.board[i])
		{
			return false;
		}
	}
	
	if(game.player != copyGame.player)
	{
		return false;
	}
	
	return true;
}

bool SwitchPlayerTest()
{
	TicTacToe game;
	int player = 2;
	game.switchPlayer();
	
	if(game.player != player)
	{
		return false;
	}
	
	game.switchPlayer();
	
	if(game.player == player)
	{
		return false;
	}
	
	return true;
}

bool VerticalWinnerTest()
{
	TicTacToe game;
	
	for(int i = 0;i < 3;i += 1)
	{
		for(int j = 0;j < 9;j += 1)
		{
			game.board[j] = '-';
		}
		
		game.board[i]= game.board[3 + i] = game.board[6 + i] = 'T';
		
		if(!game.verticalWinner())
		{
			return false;
		}
	}
	
	for(int i = 0;i < 3;i += 1)
	{
		for(int j = 0;j < 3;j += 1)
		{
			for(int k = 0;k < 3;k += 1)
			{
				for(int l = 0;l < 9;l += 1)
				{
					game.board[l] = 'T';
				}
								
				game.board[3 * i] = game.board[3 * j + 1] = game.board[3 * k + 2] = 'S';
				
				if(game.verticalWinner())
				{
					return false;
				}
			}
		}	
	}

	return true;
}

bool HorizontalWinnerTest()
{
	TicTacToe game;
	
	for(int i = 0;i < 3;i += 1)
	{
		for(int j = 0;j < 9;j += 1)
		{
			game.board[j] = '-';
		}
		
		game.board[3 * i]= game.board[3 * i + 1] = game.board[3 * i + 2] = 'T';
		
		if(!game.horizontalWinner())
		{
			return false;
		}
	}
	
	for(int i = 0;i < 3;i += 1)
	{
		for(int j = 0;j < 3;j += 1)
		{
			for(int k = 0;k < 3;k += 1)
			{
				for(int l = 0;l < 9;l += 1)
				{
					game.board[l] = 'T';
				}
								
				game.board[i] = game.board[j + 3] = game.board[k + 6] = 'S';
				
				if(game.horizontalWinner())
				{
					return false;
				}
			}
		}	
	}
	
	return true;
}

bool DiagonalWinnerTest()
{	
	TicTacToe game;
	
	for(int i = 0, j = 0,k = 8;i < 2;i += 1)
	{
		for(int l = 0;l < 9;l += 1)
		{
			game.board[l] = '-';
		}
		
		game.board[j] = game.board[4] = game.board[k] = 'T';
		
		if(!game.diagonalWinner())
		{
			return false;
		}
		
		j += 2;
		k -= 2;
	}
	
	for(int i = 0;i < 9;i += 1)
	{
		game.board[i] = 'T';
	}
	
	game.board[4] = 'S';
	
	if(game.diagonalWinner())
		return false;
	
	return true;
}

bool WinnerTest()
{
	TicTacToe game;
	
	for(int i = 0,k = 0;i < 3;i += 1)
	{
		for(int j = 0;j < 9;j += 1)
		{
			game.board[j] = '-';
		}
		
		if(k == 0)
		{
			game.board[i]= game.board[3 + i] = game.board[6 + i] = 'T';
		}
		else 
		{
			game.board[3* i] = game.board[3 * i + 1] = game.board[3 * i + 2] = 'S';
		}
		
		if(i == 2 && k == 0)
		{
			i = -1;
			k = 1;
		}
		
		if(!game.winner())
		{
			return false;
		}
	}
	
	for(int i = 0, j = 0,k = 8;i < 2;i += 1)
	{
		for(int l = 0;l < 9;l += 1)
		{
			game.board[l] = '-';
		}
		
		game.board[j] = game.board[4] = game.board[k] = 'T';
		
		if(!game.winner())
		{
			return false;
		}
		
		j += 2;
		k -= 2;
	}
	
	for(int i = 0;i < 9;i += 1)
	{
		game.board[i] = 'T';
	}
	
	game.board[4] = 'S';
	game.board[0] = 'G';
	game.board[8] = 'V';
	
	if(game.winner())
	{
		return false;
	}
	
	return true;
}

bool HasMoveTest()
{
	TicTacToe game;
	
	for(int i = 0;i < 9;i += 1)
	{
		game.board[i] = 'S';
	}
	
	if(game.hasMove())
		return false;
	
	game.board[rand() % 9] = '-';
	
	if(!game.hasMove())
		return false;
	
	return true;
}

bool MakeMoveTest()
{
	TicTacToe game;
	
	bool result;
	
	game.board[0] = 'X'; game.board[1] = 'X'; game.board[2] = '-';
	game.board[3] = 'O'; game.board[4] = 'O'; game.board[5] = 'X';
	game.board[6] = '-'; game.board[7] = 'X'; game.board[2] = '-';
	
	result = game.makeMove(2);
	result = (!result) && game.makeMove(7);

	return result;
}

bool CanPlayTest()
{
	TicTacToe game;
	
	for(int i = 0,k = 0;i < 3;i += 1)
	{
		for(int j = 0;j < 9;j += 1)
		{
			game.board[j] = '-';
		}
		
		if(k == 0)
		{
			game.board[i]= game.board[3 + i] = game.board[6 + i] = 'T';
		}
		else 
		{
			game.board[3* i] = game.board[3 * i + 1] = game.board[3 * i + 2] = 'S';
		}
		
		if(i == 2 && k == 0)
		{
			i = -1;
			k = 1;
		}
		
		if(game.canPlay())
		{
			return false;
		}
	}
	
	for(int i = 0, j = 0,k = 8;i < 2;i += 1)
	{
		for(int l = 0;l < 9;l += 1)
		{
			game.board[l] = '-';
		}
		
		game.board[j] = game.board[4] = game.board[k] = 'T';
		
		if(game.canPlay())
		{
			return false;
		}
		
		j += 2;
		k -= 2;
	}
	
	for(int i = 0;i < 9;i += 1)
	{
		game.board[i] = 'T';
	}
	
	game.board[4] = 'S';
	game.board[0] = '-';
	game.board[8] = '-';
	
	if(!game.canPlay())
	{
		return false;
	}
	
	return true;
}

bool ToStringTest()
{
	TicTacToe game;
	bool result;
	std::string bd;
	
	game.board[0] = 'X'; game.board[1] = 'X'; game.board[2] = '-';
	game.board[3] = 'O'; game.board[4] = 'O'; game.board[5] = 'X';
	game.board[6] = '-'; game.board[7] = 'X'; game.board[8] = '-';
	game.player = 2;
	
	bd = "Player 2\n\nX X X\nO O X\n- X -\n";	
	result = (bd == game.ToString());	

	game.board[0] = 'X'; game.board[1] = '-'; game.board[2] = '-';
	game.board[3] = 'X'; game.board[4] = 'O'; game.board[5] = 'X';
	game.board[6] = '-'; game.board[7] = 'O'; game.board[8] = 'O';
	game.player = 1;
	
	bd = "Player 1\n\nX - -\nX O X\n- O O\n";	
	result = (!result) && (bd == game.ToString());	

	return result;
}

bool Tester()
{
	bool(*func[12])() = { &InitializeTest, &CopyTest, &AssignmentTest,&VerticalWinnerTest,&HorizontalWinnerTest,&DiagonalWinnerTest,
		&WinnerTest,&HasMoveTest,&MakeMoveTest, &SwitchPlayerTest, &CanPlayTest, &ToStringTest}, result = true;
		
	std::string functions[12] = { "Initialize", "Copy", "Assignment", "VerticalWinner","HorizontalWinner","DiagonalWinner",
		"Winner", "HasMove", "MakeMove", "SwitchPlayer", "CanPlay", "ToString"};
	for (int i = 0; i < 12; i += 1)
	{
		std::cout << functions[i] << " Test ";
		std::cout << ((func[i]()) ? ("has passed.\n") : ("has failed.\n"));
		if (!func[i]())
		{
			result = false;
		}
	}

	std::cout << "\n";
	return result;
}

void initArray(int arr[])
{
	for(int i = 0;i < 9;i += 1)
	{
		arr[i] = i + 1;
	}
}

int findChoice(int arr[],int size,int choice)
{
	for(int i = 0;i < size;i += 1)
	{
		if(arr[i] == choice)
			return i;
	}
	
	return -1;
}

bool removeChoice(int arr[],int& size,int choice)
{
	int index = findChoice(arr,size,choice);
	
	if(index == -1)
	{
		return false;
	}
	else
	{
		for(int i = index;i < size - 1;i += 1)
		{
			arr[i] = arr[i+1];
		}
		size -= 1;
		return true;
	}
}

int randomChoice(int arr[],int size)
{
	if(size == 0)
	{
		return 0;
	}
	else
	{
		int index = rand() % size;
		return arr[index];
	}
}

int canWin(TicTacToe& game)
{
	for(int i = 0;i < 3;i += 1)
	{
		if(game.board[i] == game.board[i + 3] && game.board[i] != '-' && game.board[i + 6] == '-')
		{
			return i + 6;
		}
		else if(game.board[i] == game.board[i + 6] && game.board[i] != '-' && game.board[i + 3] == '-')
		{
			return i + 3;
		}
		else if(game.board[i + 3] == game.board[i + 6] && game.board[i + 3] != '-' && game.board[i] == '-')
		{
			return i;
		}
		else if(game.board[3 * i] == game.board[3 * i + 1] && game.board[3 * i] != '-' && game.board[3 * i + 2] == '-')
		{
			return (3 * i + 2);
		}
		else if(game.board[3 * i] == game.board[3 * i + 2] && game.board[3 * i] != '-' && game.board[3 * i + 1] == '-')
		{
			return (3 * i + 1);
		}
		else if(game.board[3 * i + 1] == game.board[3 * i + 2] && game.board[3 * i + 1] != '-' && game.board[3 * i] == '-')
		{
			return (3 * i);
		}
	}
	
	if(game.board[0] == game.board[4] && game.board[0] != '-' && game.board[8] == '-')
	{
		return 8;
	}
	else if(game.board[0] == game.board[8] && game.board[0] != '-' && game.board[4] == '-')
	{
		return 4;
	}
	else if(game.board[4] == game.board[8] && game.board[4] != '-' && game.board[0] == '-')
	{
		return 0;
	}
	else if(game.board[2] == game.board[4] && game.board[2] != '-' && game.board[6] == '-')
	{
		return 6;
	}
	else if(game.board[2] == game.board[6] && game.board[2] != '-' && game.board[4] == '-')
	{
		return 4;
	}
	else if(game.board[4] == game.board[6] && game.board[4] != '-' && game.board[2] == '-')
	{
		return 2;
	}
	
	return -1;
}

#endif 