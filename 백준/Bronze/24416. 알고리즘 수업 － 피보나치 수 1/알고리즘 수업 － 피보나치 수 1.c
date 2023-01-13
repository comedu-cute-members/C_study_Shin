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
	
	int n;

	scanf("%d", &n);

	printf("%d %d", fib(n), n - 2);


}