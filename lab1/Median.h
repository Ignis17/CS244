#ifndef MEDIAN_H
#define MEDIAN_H

#include "Archive.h"

namespace labI
{
	float Median(float data[], int size)
	{
		float temp;
    int i, j;

    // the following two loops sort the array x in ascending order
    for(i=0; i<size-1; i++)
		{
			for(j=i+1; j<size; j++)
			{
				if(data[j] < data[i])
				{
					// swap elements
          temp = data[i];
        	data[i] = data[j];
          data[j] = temp;
        }
      }
    }
    if(size%2==0)
		{
			// if there is an even number of elements, return mean of the two elements in the middle
      return((data[size/2] + data[size/2 - 1]) / 2.0);
    }
		else
		{
			// else return the element in the middle
      return data[size/2];
    }
	}
}

#endif
