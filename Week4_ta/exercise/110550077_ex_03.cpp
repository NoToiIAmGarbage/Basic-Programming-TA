#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	printf("Input a integer: ");
	int n; scanf("%d", &n);
	printf("%d\n", n);
	for(int i = 1; n != 1; i ++) {
		if(n & 1) {
			n = n * 3 + 1;
		}
		else {
			n /= 2;
		}
		printf("%d ", n);
		if(i % 10 == 0) {
			printf("\n");
		}
	}
	printf("\n");
	system("pause");
	return 0;
}