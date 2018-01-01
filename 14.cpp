#include "14.h"
#include <stdio.h>
void tmp_14()
{
	int count = 0;
	int result = 0;
	int count_tmp = 0;
	for (int i = 1000000; i >0; i--)
	{
		//printf("....\n");
		
		__int64 tmp = i;
		
		while (tmp>1)
		{
			if (tmp==10)
			{
				//printf("%d ==> 10\n",i);
				count += 6;
				break;
			}
			if (tmp%2==0)
			{
				tmp = tmp / 2;
				
			}
			else
			{
				tmp = tmp * 3 + 1;
			}
			count++;
			
		}
		
		if (count_tmp<count)
		{
			result = i;
			count_tmp = count;
			printf("result : %d / count : %d \n", i,count_tmp);
			
				
		}
		
		count = 0;
		
	}
}
