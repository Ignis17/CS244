#ifndef OUTLINERCOUNT_H
#define OUTLINERCOUNT_H

#include "Archive.h"
#include <cmath>

namespace labI
{
	float OutlinerCount(float data[], int size)
	{
		float *zScore = new float[size];
		int count =0;
		for (int i=0; i < size;i++)
		{
			zScore[i] = data[i] - Mean(data, size) / StandardDeviation(data, size);
		}
		for (int i=0; i < size;i++)
		{
			if (zScore[i] < -2 || zScore[i] > 2)
			{
				count = count + 1;
			}
		}
		return count;
	}
}

#endif
