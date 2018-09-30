//Team: Ignis
//Author: Joel Turbi, Luis Casado, Christopher Williams
//Creation: 12/06/2017
#ifndef SWITCHPLAYER_H
#define SWITCHPLAYER_H

#include "Archive.h"

namespace lab2
{
	void TicTacToe::switchPlayer()
	{
		if(player == 1)
		{
			player = 2;
		}
		else
			player = 1;
	}
};
#endif
