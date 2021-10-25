#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	srand(time(0));
	int key = rand() % 100 + 1;
	int left = 1, right = 100;
	for(int i = 1; ; i ++) {
		printf("(Attempt %d) %d ~ %d : ", i, left, right);
		int x; scanf("%d", &x);
		if(x < left || x > right) {
			printf("Out of range\n");
		}
		else {
			if(x == key) {
				printf("Bingo!\n");
				break;
			}
			else if(x > key) {
				printf("Too big\n");
				right = x;
			}
			else {
				printf("Too small\n");
				left = x;
			}
		}
	}
	system("pause");
	return 0;
}