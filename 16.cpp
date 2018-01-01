#include "16.h"
#include<stdio.h>

void tmp_16()
{
	unsigned int tmp[100000] = { 0, };
	int index = 0;
	tmp[index] = 1; 
	unsigned int count = 1;
	unsigned int location = 0;
	while (true)
	{
		for (;index>=0;index--)
		{
			
			
			if ((tmp[index] * 2)>=10)
			{
				tmp[index + 1] = tmp[index + 1]+(tmp[index] * 2) / 10;
				location++;
			}
			
				tmp[index] = (tmp[index] * 2) % 10;
			
		}
		index = location;
		if (count == 1000)
		{
			break;
		}
			
		count++;

	}
	__int64 sum = 0;
	for (int i = 0; i < sizeof(tmp)/4-1; i++)
	{
		sum += tmp[i];
	}
	printf("result is %d\n", sum);
}
