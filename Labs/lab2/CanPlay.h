//Team: Ignis
//Author: Joel Turbi, Luis Casado, Christopher Williams
//Creation: 12/06/2017
#ifndef CANPLAY_H
#define CANPLAY_H

#include "Archive.h"

namespace lab2
{
	bool TicTacToe::canPlay() const
	{
		return (hasMove() && !winner());
	}
}

#endif
