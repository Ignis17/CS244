//Lab 4: Tower of Hanoi
//Team: Ignis
//Author: Joel Turbi, Luis Casado, Christopher Williams
//Creation: 12-19-2017
#include "Repository.h"
#include <fstream>
using namespace std;
using namespace lab4;

void PlayGame()
{
	int to, from;
	TowersOfHanoi t;

	while(!(t.Success()))
	{
		cout << t << "\n";
		cout << "Choose tower to remove a disk from: ";
		cin >> from;
		cout << "Choose tower to add the disk to: ";
		cin >> to;

		if(!(t.Move(from,to)))
		{
			cout << "Move was not successful\n\n";
		}
		else
		{
			cout << "Move was successful\n\n";
		}
	}

	cout << "\nYou successfully completed the game\n";
}

int main()
{
	if(Tester())
	{
		PlayGame();
	}

	return 0;
}
