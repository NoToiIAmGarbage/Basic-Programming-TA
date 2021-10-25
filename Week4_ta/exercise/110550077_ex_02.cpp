#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	printf("Input a integer: ");
	long long x; scanf("%lld", &x);
	printf("%d's positive factors are: ", x);
	for(int i = 1; i <= x; i ++) {
		if(x % i == 0) {
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}