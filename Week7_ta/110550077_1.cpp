#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int arr[1005][1005], vis[1005][1005];
int main() {
	int m, n, p;
	printf("Please input M:");
	scanf("%d", &m);
	printf("Please input N:");
	scanf("%d", &n);
	printf("Please input P:");
	scanf("%d", &p);
	int resx = -1, resy = -1, x = 1, y = 0;
	int direx[4] = {0, 1, 0, -1}, direy[4] = {1, 0, -1, 0}, d = 0, now = 1;
	while(true) {
		int dx = x + direx[d], dy = y + direy[d];
		if(dx > m || dx <= 0 || dy > n || dy <= 0 || vis[dx][dy]) {
			d = (d + 1) % 4;
			dx = x + direx[d]; dy = y + direy[d];
			if(dx > m || dx <= 0 || dy > n || dy <= 0 || vis[dx][dy]) {
				break;
			}
		}
		if(now == p) {
			resx = dx; resy = dy;
		}
		arr[dx][dy] = now ++; vis[dx][dy] = true;
		x = dx; y = dy;
	}
	for(int i = 1; i <= m; i ++) {
		for(int j = 1; j <= n; j ++) {
			printf("%5d", arr[i][j]);
		}
		printf("\n\n");
	}
	if(resx == -1) {
		printf("P is out of range\n");
	}
	else {
		printf("The location of %d is:(%d,%d)\n", p, resx, resy);
	}
	return 0;
}