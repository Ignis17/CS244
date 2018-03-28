// Author: Joel Turbi
// Creation: 12/09/2017
// Description: Final Project - War Card Game

#include <iostream>
using namespace std;
#include "Card.h"
#include "Deck.h"
#include <string>
#include <fstream>
#include <algorithm>


void Game(Deck deck)
{
	cout << "Get ready to play WAR!!!\n";
	bool Want2Play = true;

	while (Want2Play)
	{
		cout << "There are " << deck.CardsLeft() << " card in the deck.\n";
		cout << "...dealing...\n";
		cout << "One for you...\n";
		Card playerNum1 = deck.Deal();
		playerNum1.Display();
		cout << "One for me...\n";
		Card playerNum2 = deck.Deal();
		playerNum2.Display();

		if (playerNum1.GetValue() > playerNum2.GetValue())
		{
			cout << "You Win!!!\n";
		}
		else if (playerNum1.GetValue() < playerNum2.GetValue())
		{
			cout << "I Win!!!\n";
		}
		else
		{
			cout << "It's a Tie!!!\n";
		}

		cout << "\nWould you like to play again? (yes/no)\n";

		string choiceOfPlayer;
		cin >> choiceOfPlayer;

		transform(choiceOfPlayer.begin(), choiceOfPlayer.end(), choiceOfPlayer.begin(), ::tolower);

		string answer1 = "yes";
		string answer2 = "no";

		if (choiceOfPlayer == answer1)
		{
			Want2Play = true;
			if (deck.CardsLeft() == 0)
			{
				cout << "Game Over!!!\n" << "Goodbye\n";
				Want2Play = false;
			}
		}

		else if (choiceOfPlayer == answer2)
		{
			Want2Play = false;
			cout << "\nGoodbye\n";
		}

		else if (choiceOfPlayer != answer1 || choiceOfPlayer!= answer2)
		{
			cout << "Invalid input\n";
			bool invalid = true;
			while (invalid)
			{
				cin >> choiceOfPlayer;
				if (choiceOfPlayer == answer1)
				{
					invalid = false;
				}
				else if (choiceOfPlayer == answer2)
				{
					invalid = false;
					Want2Play = false;
					cout << "\nGoodbye\n\n";
				}
			}
		}

	}
}

void Menu()
 {
	cout << "1)	Get a new card deck\n";
	cout << "2)	Show all remaining cards in the deck\n";
	cout << "3)	Shuffle\n";
	cout << "4)	Play WAR!\n";
	cout << "5)	Exit\n\n";
}

int main()
{
	int userChoice;
	bool wChoice = true;
	Deck deck;

	while (wChoice)
	{
		Menu();
		cin >> userChoice;

		switch (userChoice)
		{
			case 1:
			cout << "New card deck created\n";
			break;
		case 2:
			deck.DisplayDeck();
			break;
		case 3:
			deck.Shuffle();
			deck.DisplayDeck();
			break;
		case 4:
			Game(deck);
			break;
		case 5:
			cout << "Goodbye\n";
			wChoice = false;
			break;
		}
	}
	return 0;
}
