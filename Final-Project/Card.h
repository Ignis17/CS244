// Author: Joel Turbi
// Creation: 12/09/2017
// Description: Final Project - War Card Game

#ifndef CARD_H
#define CARD_H
#include <iostream>
using namespace std;
#include <string>


class Card
{
private:
	int rank;
	int suit;

public:
	Card()
	{
		rank;
		suit;
	}

	Card(int s, int r)
	{
		rank = r;
		suit = s;
	}

	void SetCard(int s, int r)
	{
		rank = r;
		suit = s;
	}

	int GetValue()
	{
		return rank;
	}

	void Display()
	{
		string out;
		out.append("   ");
		string outlook;

		switch(rank)
		{
			case 11: out.append("Jack");
			break;
			case 12: out.append("Queen");
			break;
			case 13: out.append("King");
			break;
			case 1: out.append("Ace");
			break;
			default: out.append(to_string(rank));
			break;
		}

		out.append(" of ");

		switch(suit)
		{
			case 0: out.append("Spades");
			switch(rank)
			{
				case 10:
				outlook.append("\n -------\n[10     ]\n[   *   ]\n[  * *  ]\n[ *   * ]\n[  * *  ]\n[   *   ]\n[    10]\n -------\n");
				break;
				case 11:
				outlook.append("\n -------\n[J      ]\n[   *   ]\n[  * *  ]\n[ ***** ]\n[*  *  *]\n[   *   ]\n[      J]\n -------\n");
				break;
				case 12:
				outlook.append("\n -------\n[Q      ]\n[   *   ]\n[  * *  ]\n[ ***** ]\n[*  *  *]\n[   *   ]\n[      Q]\n -------\n");
				break;
				case 13:
				outlook.append("\n -------\n[K      ]\n[   *   ]\n[  * *  ]\n[ ***** ]\n[*  *  *]\n[   *   ]\n[      K]\n -------\n");
				break;
				case 1:
				outlook.append("\n -------\n[A      ]\n[   *   ]\n[  * *  ]\n[ ***** ]\n[*  *  *]\n[   *   ]\n[      A]\n -------\n");
				break;
				default:
				outlook.append("\n -------\n[" + to_string(rank) + "      ]\n[   *   ]\n[  * *  ]\n[ ***** ]\n[*  *  *]\n[   *   ]\n[      " + to_string(rank) + "]\n -------\n");
				break;
			}
			break;

			case 1: out.append("Hearts");
			switch(rank)
			{
				case 10: outlook.append("\n -------\n[" + to_string(rank) + "     ]\n[ ** ** ]\n[*  *  *]\n[ *   * ]\n[  * *  ]\n[   *   ]\n[     " + to_string(rank) + "]\n -------\n");
				break;
				case 11: outlook.append("\n -------\n[J      ]\n[ ** ** ]\n[*  *  *]\n[ *   * ]\n[  * *  ]\n[   *   ]\n[      J]\n -------\n");
				break;
				case 12: outlook.append("\n -------\n[Q      ]\n[ ** ** ]\n[*  *  *]\n[ *   * ]\n[  * *  ]\n[   *   ]\n[      Q]\n -------\n");
				break;
				case 13: outlook.append("\n -------\n[K      ]\n[ ** ** ]\n[*  *  *]\n[ *   * ]\n[  * *  ]\n[   *   ]\n[      K]\n -------\n");
				break;
				case 1: outlook.append("\n -------\n[A      ]\n[ ** ** ]\n[*  *  *]\n[ *   * ]\n[  * *  ]\n[   *   ]\n[      A]\n -------\n");
				break;
				default: outlook.append("\n -------\n[" + to_string(rank) + "      ]\n[ ** ** ]\n[*  *  *]\n[ *   * ]\n[  * *  ]\n[   *   ]\n[      " + to_string(rank) + "]\n -------\n");
				break;
			}
			break;

			case 2: out.append("Diamonds");
			switch(rank)
			{
				case 10:
				outlook.append("\n -------\n[10     ]\n[   *   ]\n[  * *  ]\n[ *   * ]\n[  * *  ]\n[   *   ]\n[     10]\n -------\n");
				break;
				case 11:
				outlook.append("\n -------\n[J      ]\n[   *   ]\n[  * *  ]\n[ *   * ]\n[  * *  ]\n[   *   ]\n[      J]\n -------\n");
				break;
				case 12:
				outlook.append("\n -------\n[Q      ]\n[   *   ]\n[  * *  ]\n[ *   * ]\n[  * *  ]\n[   *   ]\n[      Q]\n -------\n");
				break;
				case 13:
				outlook.append("\n -------\n[K      ]\n[   *   ]\n[  * *  ]\n[ *   * ]\n[  * *  ]\n[   *   ]\n[      K]\n -------\n");
				break;
				case 1:
				outlook.append("\n -------\n[A      ]\n[   *   ]\n[  * *  ]\n[ *   * ]\n[  * *  ]\n[   *   ]\n[      A]\n -------\n");
				break;
				default:
				outlook.append("\n -------\n[" + to_string(rank) + "      ]\n[   *   ]\n[  * *  ]\n[ *   * ]\n[  * *  ]\n[   *   ]\n[      " + to_string(rank) + "]\n -------\n");
				break;
			}
			break;
			case 3: out.append("Clubs");
			switch(rank)
			{
				case 10:
				outlook.append("\n -------\n[10     ]\n[   *   ]\n[*  *  *]\n[  ***  ]\n[   *   ]\n[   *   ]\n[   * 10]\n -------\n");
				break;
				case 11:
				outlook.append("\n -------\n[J      ]\n[   *   ]\n[*  *  *]\n[  ***  ]\n[   *   ]\n[   *   ]\n[   *  J]\n -------\n");
				break;
				case 12:
				outlook.append("\n -------\n[Q      ]\n[   *   ]\n[*  *  *]\n[  ***  ]\n[   *   ]\n[   *   ]\n[   *  Q]\n -------\n");
				break;
				case 13:
				outlook.append("\n -------\n[K      ]\n[   *   ]\n[*  *  *]\n[  ***  ]\n[   *   ]\n[   *   ]\n[   *  K]\n -------\n");
				break;
				case 1:
				outlook.append("\n -------\n[A      ]\n[   *   ]\n[*  *  *]\n[  ***  ]\n[   *   ]\n[   *   ]\n[   *  A]\n -------\n");
				break;
				default:
				outlook.append("\n -------\n[" + to_string(rank) + "      ]\n[   *   ]\n[*  *  *]\n[  ***  ]\n[   *   ]\n[   *   ]\n[   *  " + to_string(rank) + "]\n -------\n");
				break;
			}
			break;
		}
		cout << out << outlook << endl;
	}
};
#endif
