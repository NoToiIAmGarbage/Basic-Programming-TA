#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int sec;
	printf("Input an positive integer (second): ");
	scanf("%d", &sec);
	int min = sec / 60; sec %= 60;
	int hr = min / 60; min %= 60;
	int day = hr / 24; hr %= 24;
	printf("%d days %d hr %d min %d s", day, hr, min, sec);
	system("pause");
	return 0;
}