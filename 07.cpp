#include <stdio.h>
#include <stdlib.h>


void getChe(int num, int count) {
	int *arr;
	arr = (int *)malloc(sizeof(int) * num);
	int i = 2;

	// �Է¹��� �� ��ŭ �迭�� ��� �ʱ�ȭ �صд�
	for (i = 2; i <= num; i++) {
		arr[i] = i;
	}

	for (i = 2; i <= num; i++) {
		if (arr[i] == 0) // �̹� üũ�� ���� ����� Ȯ������ �ʴ´�
			continue;
		for (int j = i + i; j <= num; j += i) { // i�� ������ i�� ������� 0���� üũ
			arr[j] = 0;
		}
	}

	// print
	for (i = 2; i <= num; i++) {
		if (arr[i] != 0)
			count++;
		if (count == 10001)
		{
			printf("%d\n", arr[i]);
			return;
		}

	}
}
int main()
{
	
	
	getChe(10000000, 0);
	
}


