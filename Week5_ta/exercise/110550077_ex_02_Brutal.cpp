#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	double START = clock();
	for(int i = 2; i <= 80000; i ++) {
		bool yes = true;
		for(int j = 2; j < i; j ++) {
			if(i % j == 0) {
				yes = false;
			}
		}
		if(yes) {
			printf("%d\n", i);
		}
	}
	double END = clock();
	printf("Time: %lf\n", (END - START) / CLOCKS_PER_SEC);
	system("pause");
	return 0;
}