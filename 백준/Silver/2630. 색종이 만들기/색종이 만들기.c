#pragma warning(disable:4996)
#include <stdio.h>
#define TRUE	1
#define FALSE	0

int paper[128][128];
int blue = 0;
int white = 0;

void scanPaper(int startcol, int startrow, int size);

int main() {
	
	

	int N;
	
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &paper[i][j]);
		}
	}

	
	scanPaper(0, 0, N);
	

	printf("%d\n%d", white, blue);
	return 0;
}

void scanPaper(int startcol, int startrow, int size) {
	int checkblue = 1;
	int checkwhite = 0;
	for (int i = startcol; i < startcol + size; i++) {
		for (int j = startrow; j < startrow + size; j++) {
			checkblue *= paper[i][j];
			checkwhite += paper[i][j];
		}
	}

	if (checkwhite == 0) {
		white++;
		return;
	}
	
	if (checkblue == 1) {
		blue++;
		return;
	}

	size /= 2;
	
	scanPaper(startcol, startrow, size);
	scanPaper(startcol + size, startrow, size);
	scanPaper(startcol, startrow + size, size);
	scanPaper(startcol + size, startrow + size, size);
}