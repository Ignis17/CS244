#ifndef STANDARDDEVIATION_H
#define STANDARDDEVIATION_H

#include "Archive.h"
#include <cmath>

namespace labI
{
	float StandardDeviation(float data[], int size)
	{
		float sum = 0.0, mean, standardDeviation = 0.0;
	    	int i;

				mean = Mean(data, size);

    		for(i = 0; i < size; ++i)
		{
		       standardDeviation += pow(data[i] - mean, 2);
		}
    		return sqrt((standardDeviation / size));
	}
}

#endif
