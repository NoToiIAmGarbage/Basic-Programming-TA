#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	printf("ax^2+bx+c=0\n");
	printf("Input the coefficient a, b, c : ");
	int a, b, c; scanf("%d%d%d", &a, &b, &c);
	int d = b * b - 4 * a * c;
	if(d < 0) {
		printf("No real root\n");
	}
	else if(d > 0) {
		printf("Two distinct real roots\n");
	}
	else if(d == 0) {
		printf("Double root\n");
	}
	system("pause");
	return 0;
}