#include <stdio.h>

int main() {
	__int64 a = 600851475143;
	__int64 tmp = a;
	//printf("%d\n", (int)tmp);
	__int64 temp[500] = {0};
	int x = 0;
	for (int i = 2; i <= tmp; i++) 
	{
		printf("%d ----> %f\n", i, tmp);
		if (tmp%i == 0)
		{
			printf("%d\n", i);
			tmp = tmp / i;
			temp[x] = i;
			i = 2;
			
			x++;

			
		}
	}
	__int64 result = 0;
	for (int i = 0; i < 499; i++)
	{
		if (result <= temp[i])
		{
			result = temp[i];
		}
	}
	printf("소인수분해 최대값 %d", result);
}