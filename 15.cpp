#include "15.h"
#include <stdio.h>
#include <Windows.h>

void print_arr(unsigned long long namo[21][21]) {
	for (int i = 0; i < 21; i++)
	{
		for (int j = 0; j < 21; j++)
		{
			printf("%12lld", namo[i][j]);
		}
		printf("\n");
	}
}

void tmp_15()
{
	
	unsigned long long namo[21][21] = { 0, };// 선언 및 초기화

	print_arr(namo);//출력
	for (int i = 0; i < 21; i++)
	{
		namo[i][0] = 1ll;
		namo[0][i] = 1ll;
	}
	//초기화 1 넣어주기
	print_arr(namo);//화면 출력
	system("cls");// 화면 초기화
	for (int i = 1; i < 21; i++)
	{
		for (int j = 1; j < 21; j++)
		{
			namo[i][j] = namo[i - 1][j]+ namo[i][j-1];
		}
	}
	print_arr(namo);
	//system("cls");
	printf("\n\n result : %lld\n", namo[20][20]);
}
