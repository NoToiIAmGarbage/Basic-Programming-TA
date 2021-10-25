#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	printf("Input layers of pascal triangle (0 <= layers <= 9):");
	int n; scanf("%d", &n);
	n ++;
	int arr[20] = {0}, d = 0;
	for(int i = 1; i <= n; i ++) {
		for(int j = i - 1; j >= 1; j --) {
			arr[j] = arr[j] + arr[j - 1];
		}
		arr[i] = 1;
		for(int j = 1; j <= i; j ++) {
			printf("%d ", arr[j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}