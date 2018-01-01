#include "11.h"
#include <stdio.h>
int cross_R(int num[20][20]);
int cross_L(int num[20][20]);
int garo(int num[20][20]);
int sero(int num[20][20]);

void tmp_11()
{

	int num[20][20] = { 0, };
	FILE *file;

	char s[61];

	file = fopen("tmp_11.txt", "r");
	int index = 0;

	int level = 0;
	while (!feof(file))
	{
		fgets(s, 61, file);
		for (int i = 0; i < 20; i++)
		{
			num[level][i] = ((s[index] - 48) * 10) + (s[index + 1] - 48);
			index += 3;
		}
		index = 0;

		//puts(s);


		level++;
	}

	fclose(file);
	index = 0;
	if (index<garo(num))
	{
		index = garo(num);
	};
	if (index<cross_R(num))
	{
		index = cross_R(num);
	};
	if (index<cross_L(num))
	{
		index = cross_L(num);
	};
	if (index<sero(num))
	{
		index = sero(num);
	};
	printf("\n\n result : %d\n", index);
}
int garo(int num[20][20])
{
	int result = 0;
	for (int i = 0; i < 20; i++)
	{
		int tmp = 0;
		for (int j = 0; j < 17; j++)
		{

			tmp = num[i][j] * num[i][j + 1] * num[i][j + 2] * num[i][j + 3];
			if (result <= tmp)
			{
				result = tmp;
			}
		}
	}
	printf("%d\n", result);
	return result;
}

int sero(int num[20][20])
{
	int result = 0;
	for (int i = 0; i < 20; i++)
	{
		int tmp = 0;
		for (int j = 0; j < 17; j++)
		{

			tmp = num[j][i] * num[j + 1][i] * num[j + 2][i] * num[j + 3][i];
			if (result <= tmp)
			{
				result = tmp;
			}
		}
	}
	printf("%d\n", result);
	return result;
}

int cross_L(int num[20][20])
{
	int tmp = 0;
	int result = 0;
	for (int i = 16; i >= 0; i--)
	{
		for (int j = 0; j < 17; j++)
		{
			tmp = num[i][j] * num[i + 1][j + 1] * num[i + 2][j + 2] * num[i + 3][j + 3];
			if (result<tmp)
			{
				result = tmp;
			}

		}
	}
	printf("%d\n", result);
	return result;
}

int cross_R(int num[20][20])
{
	int tmp = 0;
	int result = 0;

	for (int i = 0; i < 17; i++)
	{
		for (int j = 3; j < 20; j++)
		{
			tmp = num[i][j] * num[i + 1][j - 1] * num[i + 2][j - 2] * num[i + 3][j - 3];
			if (result<tmp)
			{
				result = tmp;
			}
		}

	}

	printf("%d\n", result);
	return result;
}