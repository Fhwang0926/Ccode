#include <stdio.h>
#include "11.h"
#include "13.h"
#include "14.h"
#include "12.h"
#include "15.h"
#include "16.h"
#include "18.h"
#include "20.h"
#include <stdlib.h>
void printtriangle(int h[], int n);
int getmax(int h[], int d[], int s, int c, int n);

int f[1000];

int main()
{

	//tmp_11();
	//tmp_12();
	//tmp_13();
	//tmp_14();
	//tmp_15();
	//tmp_16();

	//tmp_18();
	//tmp_20();
	char s[] = " 75 95 64 17 47 82 18 35 87 10 20 \
04 82 47 65 19 01 23 75 03 34 88 02 77 73 07 63 \
67 99 65 04 28 06 16 70 92 41 41 26 56 83 40 80 \
70 33 41 48 72 33 47 32 37 16 94 29 53 71 44 65 \
25 43 91 52 97 51 14 70 11 33 28 77 73 17 78 39 \
68 17 57 91 71 52 38 17 14 91 43 58 50 27 29 48 \
63 66 04 68 89 53 67 30 73 16 69 87 40 31 04 62 \
98 27 23 09 70 98 73 93 38 53 60 04 23";

	int h[1000];
	int d[1000];
	int n = 0;

	memset(d, 0, sizeof(d));

	for (char *tok = strtok(s, " "); tok; tok = strtok(0, " "))
	{
		h[n++] = atoi(tok);
	}

	printf("Ans = %d\n", getmax(h, d, 0, 1, n));

	int c = 0;
	while (c < n)
	{
		h[c] = -h[c];
		c = f[c];
	}

	printtriangle(h, n);
}

int getmax(int h[], int d[], int s, int c, int n)
{
	if (s >= n) return 0;
	if (d[s]) return d[s];
	int a = getmax(h, d, s + c, c + 1, n);
	int b = getmax(h, d, s + c + 1, c + 1, n);
	if (a > b) { f[s] = s + c; return d[s] = a + h[s]; }
	f[s] = s + c + 1; return d[s] = b + h[s];
}

void printtriangle(int h[], int n)
{
	int u = 40;
	for (int i = 0; ; i++)
	{
		int s = i*(i + 1) / 2;
		if (n < s + i + 1) break;
		printf("%*s", u - i * 2, "");
		for (int j = 0; j < i + 1; j++)
		{
			if (h[s + j] < 0) printf("\033[1;34m%02d\033[0m ", -h[s + j]);
			else printf("%02d ", h[s + j]);
		}
		putchar('\n');
	}
}