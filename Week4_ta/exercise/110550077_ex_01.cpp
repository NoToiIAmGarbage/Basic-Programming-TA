#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	for(int i = 1; i <= 9; i ++) {
		for(int j = 1; j <= 9; j ++) {
			printf("%d*%d=%d  ", i, j, i * j);
			if(i * j <= 9) {
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}