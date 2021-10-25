#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	printf("What operation would you like to perform?\n");
	printf("        A) Addition\n");
	printf("        B) Subtraction\n");
	printf("        C) Multiplication\n");
	printf("        D) Division\n");
	char op; scanf("%c", &op);
	if(op <= 'Z' && op >= 'A') {
		op += 'a' - 'A';
	}
	double x, y;
	printf("Please enter first number: ");
	scanf("%lf", &x);
	printf("Please enter second number: ");
	scanf("%lf", &y);
	if(op == 'a') {
		printf("%f + %f = %f\n", x, y, x + y);
	}
	else if(op == 'b') {
		printf("%f - %f = %f\n", x, y, x - y);
	}
	else if(op == 'c') {
		printf("%f * %f = %f\n", x, y, x * y);
	}
	else {
		printf("%lf / %lf = %lf\n", x, y, x / y);
	}
	system("pause");
	return 0;
}