#ifndef MIMIMUM_H
#define MINIMUM_H

#include "Archive.h"

namespace labI
{
	float Minimum(float data[], int size)
	{
		float min = data[size];
		min = data[0];

		for (int i = 1; i < size; i +=1)
		{
			while(min > data[i])
			{
				min = data[i];
			}
		}
		return min;
	}
}

#endif
