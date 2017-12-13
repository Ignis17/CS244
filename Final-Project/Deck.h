// Author: Joel Turbi
// Creation: 12/09/2017
// Description: Final Project - War Card Game

#ifndef DECK_H
#define DECK_H
#include <iostream>
using namespace std;
#include "Card.h"
#include <ctime>
#include <stdlib.h>

class Deck
{
private:
	Card storage[52];
	int size;
public:
	Deck()
	{
		size = 52;
		int counter = 0;
		for (int i = 0; i < 4; i++)
		{
			for (int j = 1; j < 14; j++)
			{
				storage[counter].SetCard(i, j);
				counter++;\
			}
		}
	}

	Card Deal()
	{
		size--;
		Card card1 = storage[size];
		return card1;
	}

	Card Shuffle()
	{
		srand(time(0));
		int a, b;

		for (int i = 0; i < size; i++)
		{
			a = rand() % size;
			b = rand() % size;

			Card c1 = storage[a];
			storage[a] = storage[b];
			storage[b] = c1;
		}
	}

	int CardsLeft()
	{
		return size;
	}

	void DisplayDeck()
	{
		for (int i = 0; i < size; i++)
		{
			storage[i].Display();
		}
	}
};
#endif
