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
	
	unsigned long long namo[21][21] = { 0, };// ���� �� �ʱ�ȭ

	print_arr(namo);//���
	for (int i = 0; i < 21; i++)
	{
		namo[i][0] = 1ll;
		namo[0][i] = 1ll;
	}
	//�ʱ�ȭ 1 �־��ֱ�
	print_arr(namo);//ȭ�� ���
	system("cls");// ȭ�� �ʱ�ȭ
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
