#ifndef RANGE_H
#define RANGE_H

#include "Archive.h"

namespace labI
{
	float Range(float data[], int size)
	{
		float max = Maximum(data, size);
		float min = Minimum(data, size);
		float range = (max -min);
		return range;
	}
}

#endif
