#include <stdio.h>
#include <stdlib.h>


int main() {
	unsigned int result = 1;
	int j;
	for (int i = 2; i < 20; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
				break;
		}
		if (i == j)
		{
			printf("¼Ò¼ö´Â %d\n", i);
			for (int k = j; k < 20; k = k*j)
			{
				result = result * j;
			}
				
			
		}
		

	}
	printf("%d\n", result);
}
