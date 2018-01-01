#include <stdio.h>



int main()

{
	unsigned int result;
	unsigned int tmp = 0;
	for (int i = 1; i <= 100; i++)
	{
		tmp += i;
	}
	tmp = tmp*tmp;
	printf("%d\n", tmp);

	result = tmp;
	tmp = 0;
	for (int i = 1; i <= 100; i++)
	{
		
		tmp += i*i;
	}
	printf("%d\n", tmp);
	printf("result : %d\n", result - tmp);
}
