#pragma warning(disable:4996)
#include <stdio.h>
#define TRUE	1
#define FALSE	0

int main() {
	char arr[100];
	int count = 0;
	int num;
	int flag = TRUE;
	
	scanf("%d", &num);
	for (int ir = 0; ir < num; ir++) {
		scanf("%s", arr);
		int j = 0;
		int alp[26] = { 0, };
		flag = TRUE;
		while (flag) {
			if (arr[j] == '\0') break;
			alp[arr[j] - 'a']++;
			for (int i = 0; i < alp[arr[j] - 'a']; i++) {
				if (arr[j] != arr[j - i]) {
					flag = FALSE;
					break;
				}
			}
			j++;
			
		}
		if (flag) count++;
	}

	printf("%d", count);
}