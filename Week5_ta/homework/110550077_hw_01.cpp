#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int arr1[100][100], arr2[100][100];
int main() {
	int m, n, p; scanf("%d%d%d", &m, &n, &p);
	for(int i = 1; i <= m; i ++) {
		for(int j = 1; j <= n; j ++) {
			scanf("%d", &arr1[i][j]);
		}
	}
	for(int i = 1; i <= n; i ++) {
		for(int j = 1; j <= p; j ++) {
			scanf("%d", &arr2[i][j]);
		}
	}
	for(int i = 1; i <= m; i ++) {
		for(int j = 1; j <= p; j ++) {
			int t = 0;
			for(int k = 1; k <= n; k ++) {
				t += arr1[i][k] * arr2[k][j];
			}
			printf("%d ", t);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}