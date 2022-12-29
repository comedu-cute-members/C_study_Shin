#pragma warning(disable :4996)
#include <stdio.h>

void QuickSort(int x[], int start, int end) {
	if (start >= end) {
		return;
	}

	int pivot = start;
	int i = start + 1;
	int j = end;
	int temp;

	while (i <= j) {
		while (x[i] >= x[pivot]) i++;
		while (x[j] <= x[pivot] && j > start) j--;
		if (i > j) {
			temp = x[j];
			x[j] = x[pivot];
			x[pivot] = temp;
		}
		else {
			temp = x[j];
			x[j] = x[i];
			x[i] = temp;
		}
	}

	QuickSort(x, start, j - 1);
	QuickSort(x, j + 1, end);
}

int main() {

	int N, k;
	int x[1001];

	scanf("%d %d", &N, &k);

	for (int i = 1; i <= N; i++) {
		scanf("%d", &x[i]);
	}

	QuickSort(x, 1, N);

	printf("%d", x[k]);

	return 0;
}