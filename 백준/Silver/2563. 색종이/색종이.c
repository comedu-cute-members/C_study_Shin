#pragma warning(disable:4996)
#include <stdio.h>
#define TRUE	1
#define FALSE	0

int main() {
	int isBlack[100][100] = { 0, };
	int nSumBlack = 0;
	int nPaper;
	int x, y;

	scanf("%d", &nPaper);

	for (; nPaper > 0; nPaper--) {
		scanf("%d %d", &x, &y);
		for (int i = x; i < x + 10; i++) {
			for (int j = y; j < y + 10; j++) {
				isBlack[i][j] = 1;
			}
		}
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			nSumBlack += isBlack[i][j];
		}
	}

	printf("%d", nSumBlack);
}