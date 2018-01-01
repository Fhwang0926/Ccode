#include <stdio.h>

int main()
{

	printf("a+b+c=???\n");
	for (int a = 1; a < 1000; a++)
	{
		for (int b = 1; b < 1000; b++)
		{
			for (int c = 1; c < 1000; c++)
			{
				if (a + b + c == 1000 && (a*a) + (b*b) == (c*c))
				{
					//printf("%d+%d+%d=%d\n", a, b, c, a + b + c);
					if (a + b + c == 1000) {
						printf("°á°ú´Â %d\n", a*b*c);
						return 0;
					}

				}
			}

		}




	}


}
