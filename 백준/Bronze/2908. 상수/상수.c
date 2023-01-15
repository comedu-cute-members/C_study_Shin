#pragma warning(disable:4996)
#include <stdio.h>
#define TRUE	1
#define FALSE	0

int main() {
	
	int A, B;

	scanf("%d %d", &A, &B);

	A = (A % 10) * 100 + ((A / 10) % 10) * 10 + A / 100;
	B = (B % 10) * 100 + ((B / 10) % 10) * 10 + B / 100;

	printf("%d", (A > B) ? A : B);
	
	return 0;
}
