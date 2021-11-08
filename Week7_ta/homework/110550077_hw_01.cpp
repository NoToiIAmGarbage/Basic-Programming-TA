#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int trans(int x) {
	return x * 9 / 5 + 32;
}
int main() {
	printf("What's the temperature (Celsius): ");
	int c; scanf("%d", &c);
	printf("Celsius = %d, Fehrenheit = %d\n", c, trans(c));
	system("pause");
	return 0;
}