#include "13.h"
#include <stdio.h>

void tmp_13()
{
	FILE *pFile = NULL;
	int tmp = 0;
	int index = 0;
	pFile = fopen("tmp_13.txt", "r");
	int sum[100][50] = { NULL };
	int result[55] = { NULL };
	if (pFile != NULL)
	{
		char strTemp[52];
		char *pStr;
		
		while (!feof(pFile))
		{
			pStr = fgets(strTemp, sizeof(strTemp), pFile);
			
			for (int i = 0; i < 50; i++)
			{
				sum[index][i] = strTemp[i]-48;
			}
			index++;
		}
		fclose(pFile);
	}
	else
	{
		printf("파일을 읽지 못하였습니다\n");
	}
	tmp = 0;
	int in = 54;
	for (int i = 49; i >=0; i--)
	{
		for (int j = 0; j < 100; j++)
		{
			tmp += sum[j][i];
		}
		result[i + 5] = (tmp % 10);
		tmp = tmp / 10;
		

	}
	int i;
	for (i= 4; i > 0; i--)
	{
		if (tmp%10!=0)
		{
			result[i] = tmp % 10;
		}
		else
		{
			break;
		}
		tmp = tmp / 10;
	}
	tmp = 0;
	for (i = ++i; tmp < 10; i++)
	{
		
		printf("%d", result[i]);
		tmp++;
	}
	printf("\n");
	
}
