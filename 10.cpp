#include <stdio.h>
#define MAX 2000000
int main()
{
	bool    *tmp = new bool[MAX + 1];
	double  sum = 0;

	for (int i = 2; i <= MAX; i++)
	{
		tmp[i] = true;
	}

	//소수는 true
	//비소수는 false
	for (int i = 2; (i*i) <= MAX; i++)
	{
		if (tmp[i] == true)
		{
			for (int j = i + i; j <= MAX; j += i)
			{
				tmp[j] = false;
			}
		}
	}

	//MAX 범위 내의 true 소수의 합
	for (int i = 2; i <= MAX; i++)
	{
		if (tmp[i] == true)
		{
			sum += i;
		}
	}

	printf("%.lf\n", sum);

	
}
