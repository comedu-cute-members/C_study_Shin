#pragma warning(disable:4996)
#include <stdio.h>
#define TRUE	1
#define FALSE	0

int N, M;

int nums[10] = { 0, };
int numcheck[10] = { 0, };

void dfs(int depth) {

	if (depth == M) {
		for (int i = 0; i < M; i++) {
			printf("%d ", nums[i]);
		}
		printf("\n");
	}

	else {
		for (int i = 1; i <= N; i++) {
			if (numcheck[i] == FALSE) {
				nums[depth] = i;
				numcheck[i] = TRUE;
				dfs(depth + 1);
				numcheck[i] = FALSE;
			}
		}
	}

}

int main() {
	
	scanf("%d %d", &N, &M);

	
	dfs(0);

}