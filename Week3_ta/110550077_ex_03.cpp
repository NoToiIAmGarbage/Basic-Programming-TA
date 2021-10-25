#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	printf("Input a AD year (smaller than 2021): ");
	int year;
	scanf("%d", &year);
	if((year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0)) {
		printf("%d year is a leap year", year);
	}
	else {
		printf("%d year is a common year", year);
	}
	system("pause");
	return 0;
}