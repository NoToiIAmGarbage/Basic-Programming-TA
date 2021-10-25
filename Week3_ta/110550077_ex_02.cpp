#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
int main() {
	printf("Please input a integer : ");
	int x; scanf("%d", &x);
	if(x & 1) {
		printf("The integer is odd\n");
	}
	else {
		printf("The integer is even\n");
	}
	system("pause");
	return 0;
}