#ifndef SORT_H
#define SORT_H

#include "Archive.h"

namespace labI
{
	void Sort(float data[],int size)
	{
		int temp;
		for(int i = 0; i < size; i++)
    {
			for(int j = 0;j < size - 1; j++)
			{
				if(data[j] > data[j+1])
				{
					//we need to swap
          temp = data[j];
          data[j] = data[j+1];
          data[j+1] = temp;
        }
      }
    }
		return;
	}
}
#endif
