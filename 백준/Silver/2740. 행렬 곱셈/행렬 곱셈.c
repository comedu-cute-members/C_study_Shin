#pragma warning(disable:4996)
#include <stdio.h>
#define TRUE	1
#define FALSE	0

int fib(n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}

int main() {
	
	int N, M, K;
	int A[100][100];
	int B[100][100];
	int C[100][100];
	int num;

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	scanf("%d %d", &M, &K);

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < K; j++) {
			scanf("%d", &B[i][j]);
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			num = 0;
			for (int k = 0; k < M; k++) {
				num += A[i][k] * B[k][j];
			}
			printf("%d ", num);
		}
		printf("\n");
	}


	return 0;
}