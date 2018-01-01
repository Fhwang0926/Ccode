#include "18.h"
#include <stdio.h>
#include <consoleapi.h>
void tmp_18()
{
	FILE *pFile = NULL;
	int index = 0;
	pFile = fopen("tmp_18.txt", "r");
	int sum[15][15] = { 0, };
	int result[55] = { 0 };
	int tmp = 3;
	if (pFile != NULL)
	{
		char strTemp[50];
		int lo = 0;
		while (!feof(pFile))
		{
			if (index == 15) break;
			fgets(strTemp, tmp*2-1, pFile);
			
			for (int i = 0; i <= tmp; i=i+3)
			{
				sum[index][lo] = (((strTemp[i]) - 48)*10)+((strTemp[i+1]-48) % 10);
				if (strTemp[i+2]==10)
				{
					break;
				}
				lo++;
			}
			lo = 0;
			index++;
			tmp+=3;
			
		}
		fclose(pFile);
	}
	else
	{
		printf("파일을 읽지 못하였습니다\n");
	}


	int t = 0;

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			if (sum[i][j] == 0) break;
			printf(" %d",sum[i][j]);
			if (t==j)
			{
				break;
			}
			else
			{
				t = j + 1;
			}
			
		}
		t++;
		printf("\n");

	}
	
	
}
