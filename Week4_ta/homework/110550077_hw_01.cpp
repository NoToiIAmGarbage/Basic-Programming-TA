#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void swap(int &x, int &y) {
	int t = x;
	x = y;
	y = t;
}
int main() {
	printf("Input the first integer: ");
	int x; scanf("%d", &x);
	printf("Input the second integer: ");
	int y; scanf("%d", &y);
	if(x > y) {
		swap(x, y);
	}
	while(true) {
		if(!y) {
			break;
		}
		swap(x, y);
		y = y % x;
	}
	printf("GCD is %d\n", x);
	system("pause");
	return 0;
}