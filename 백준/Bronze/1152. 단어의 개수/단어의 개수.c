#pragma warning(disable:4996)
#include <stdio.h>;

int main() {
	char arr[1000000];
	int count = 1;

	gets(arr);

	int i = 1;

	while (arr[i] != '\0') {
		if (arr[i] == ' ') count++;
		i++;
	}

	if (arr[i - 1] == ' ') count--;

	printf("%d", count);
}