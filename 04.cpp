#include <stdio.h>

int main()
{
	
	int tmp=0 ;
	
	
	for (int i = 900; i < 1000; i++)
	{
		for (int j = 900; j < 1000; j++)
		{
			printf("%d\n",i*j);
			int n=i*j,reverse = 0;
			while (n != 0)
			{
				
				reverse = reverse * 10;
				reverse = reverse + n % 10;
				n = n / 10;
			}
			if (reverse == i*j)
			{
				tmp = i*j;
			}
		}

	}
	

	printf("result = %d\n", tmp);

	return 0;
}