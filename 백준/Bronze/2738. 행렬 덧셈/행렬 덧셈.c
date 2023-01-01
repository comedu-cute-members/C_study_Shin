#pragma warning(disable :4996)
#include <stdio.h>

int main() {

	int N, M;
	int num;

	int arrA[100][100];

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {

			scanf("%d", &num);

			arrA[i][j] = num;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {

			scanf("%d", &num);

			arrA[i][j] += num;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {

			printf("%d ", arrA[i][j]);

		}
		printf("\n");
	}



	return 0;
}