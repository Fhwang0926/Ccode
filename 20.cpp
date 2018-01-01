#include "20.h"
#include <stdio.h>
void tmp_20()
{
	unsigned int tmp[100000] = { 0, };
	int index = 0;
	tmp[index] = 1;
	unsigned int count = 1;
	unsigned int location = 0;
	while (true)
	{
		for (; index >= 0; index--)
		{


			if (tmp[index] * count >= 10)
			{
				tmp[index + 1] = tmp[index + 1]+((tmp[index] * count )/ 10);
				location++;
			}

			tmp[index] = tmp[index]+((tmp[index] * count) % 10);

		}

		index = location;

		for (int i = 0; i < location; i++)
		{
			if (tmp[i] >= 10)
			{
				tmp[i + 1] = tmp[i + 1] + (tmp[i] / 10);
				tmp[i] = tmp[i] % 10;

			}



		}
		//10의 자리수 보정
		if (count == 100-1)
		{
			break;
		}
		count++;
		


	}
	__int64 sum = 0;
	for (int i = 0; i < sizeof(tmp) / 4 - 1; i++)
	{
		sum += tmp[i];
	}
	printf("result is %d\n", sum);
}
