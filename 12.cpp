#include "12.h"
#include <stdio.h>

//#define NUM 500
//int GetNumDivisors(int n);

int tmp_12()
{
	int tmp = 0;
	int temp = 1;
	bool tt = 0;
	int count = 0;

	for (;;)
	{

		tmp++;
		temp = (tmp*(tmp + 1)) / 2;
		int i;
		int n = temp;
		for (i = 1; i*i<n; i++) {

			if (n%i == 0)
			{
				count+=2;//쌍으로 존재하므로 2번 더해준다 약수의 개수가 짝수일 경우
				//printf(" %d %d", i, n / i);  //약수는 쌍으로 존재
			}


		}

		if (i*i == n)
		{
			//printf(" %d ", i);   //n이 제곱수인 경우
			count++;//제곱수인 경우 한번 더한다, 약수의 개수가 홀수일 경우에만 동작한다
		}
		
		//printf("    |%d|==> %d \n", temp, count);
		if (count>=500)
		{
			printf("result : %d\n", temp);
			break;
		}
		count = 0;
		
	
	}



	/*
	
	int n = NUM;
	int a, b;

	b = GetNumDivisors(n++ / 2);
	for (; ; )
	{
		a = GetNumDivisors(n++);
		if (a*b > NUM) break;
		b = GetNumDivisors(n++ / 2);
		if (a*b > NUM) break;
	}

	printf("Ans = %d\n", (n - 2)*(n - 1) / 2);
	*/
	return 0;

}
int GetNumDivisors(int n)
{
	int c = 1;
	int k;

	for (k = 0; !(n % 2); k++) n /= 2;
	c = k + 1;
	for (int p = 3; p*p <= n; p += 2)
	{
		for (k = 0; !(n%p); k++) n /= p;
		c *= k + 1;
	}
	return c*((n > 1) + 1);
}



