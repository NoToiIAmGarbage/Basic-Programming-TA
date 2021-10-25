#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	printf("Input a integer: ");
	int x; scanf("%d", &x);
	printf("The perfect nums smaller than this integer are:\n");
	for(int i = 2; i <= x; i ++) {
		int t = 1;
		for(int j = 2; j * j <= i; j ++) {
			if(i % j == 0) {
				t += j;
				if(i / j != i) {
					t += i / j;
				}
			}
		}
		if(t != i) {
			continue;
		}
		printf("%d\n", i);
	}
	system("pause");
	return 0;
}