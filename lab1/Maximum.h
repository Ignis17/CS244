#ifndef MAXIMUM_H
#define MAXIMUM_H

#include "Archive.h"

namespace labI
{
	float Maximum(float data[], int size)
	{
		float max = data[size];
		max = data[0];
		
		for (int i = 1; i < size; i +=1)
		{
			while(max < data[i])
			{
				max = data[i];
			}
		}
	return max;
	}
}
#endif
