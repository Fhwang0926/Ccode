#include <stdio.h>
#include <stdlib.h>


void getChe(int num, int count) {
	int *arr;
	arr = (int *)malloc(sizeof(int) * num);
	int i = 2;

	// 입력받은 수 만큼 배열에 모두 초기화 해둔다
	for (i = 2; i <= num; i++) {
		arr[i] = i;
	}

	for (i = 2; i <= num; i++) {
		if (arr[i] == 0) // 이미 체크된 수의 배수는 확인하지 않는다
			continue;
		for (int j = i + i; j <= num; j += i) { // i를 제외한 i의 배수들은 0으로 체크
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


