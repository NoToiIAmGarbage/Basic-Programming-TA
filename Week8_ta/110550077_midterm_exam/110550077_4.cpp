#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
int main() {
	int m, n, p;
	cout << "Please input M:"; cin >> m;
	cout << "Please input N:"; cin >> n;
	cout << "Please input P:"; cin >> p;
	int direx[4] = {0, 1, 0, -1}, direy[4] = {1, 0, -1, 0};
	int resx = -1, resy = -1, d = 0, x = 1, y = 0, now = 1;
	int vis[105][105], arr[105][105];
	memset(vis, 0, sizeof(vis));
	memset(arr, 0, sizeof(arr));
	while(true) {
		int dx = x + direx[d], dy = y + direy[d];
		if(dx > m || dx < 1 || dy > n || dy < 1 || vis[dx][dy]) {
			d ++;
			if(d == 4) {
				d = 0;
			}
			dx = x + direx[d], dy = y + direy[d];
			if(dx > m || dx < 1 || dy > n || dy < 1 || vis[dx][dy]) {
				break;
			}
		}
		if(now == p) {
			resx = dx; resy = dy;
		}
		vis[dx][dy] = true;
		arr[dx][dy] = now ++;
		x = dx; y = dy;
	}
	for(int i = 1; i <= m; i ++) {
		for(int j = 1; j <= n; j ++) {
			printf("%5d", arr[i][j]);
		}
		cout << "\n\n";
	}
	if(resx == -1) {
		cout << "P is out of range\n";
	}
	else {
		cout << "The location of " << p << " is:(" << resx << "," << resy << ")\n";
	}
	return 0;
}