#pragma warning(disable :4996)
#include <stdio.h>
#include <string.h>
#define TRUE	1
#define FALSE	0

int main() {

	int count = 0;
	int N;
	char arrN[20];


	scanf("%d", &N);

	int i = 665;
	while (TRUE) {
		i++;

		sprintf(arrN, "%d", i);

		for (int j = 0; j < strlen(arrN) - 2; j++) {
			if (arrN[j] == '6' && arrN[j + 1] == '6' && arrN[j + 2] == '6') {
				count++;
				break;
			}
		}

		
		if (count == N) {
			printf("%d", i);
			break;
		}
	}

	return 0;
}