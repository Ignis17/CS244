#ifndef MEAN_H
#define MEAN_H

#include "Archive.h"

namespace labI
{
	float Mean(float data[], int size)
	{
		float sum, mean = 0.0;

   		for (int i = 0; i < size; i++)
   		{
      			sum += data[i];
   		}                
   		mean = ((float)sum)/size;
		return mean;
	}
}

#endif
