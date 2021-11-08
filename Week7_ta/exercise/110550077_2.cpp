#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
bool vis[100005];
int main() {
	printf("Input two positive integers N K = ");
	int n, k; scanf("%d%d", &n, &k);
	int now = 1;
	for(int i = 0; i < n - 1; i ++) {
		int cnt = 0;
		while(cnt < k) {
			if(!vis[now]) {
				cnt ++;
				if(cnt == k) {
					vis[now] = true;
					break;
				}	
			}
			now ++;
			if(now == n + 1) {
				now = 1;
			}
		}
	}
	for(int i = 1; i <= n; i ++) {
		if(!vis[i]) {
			printf("The winner is %d\n", i);
		}
	}
	return 0;
}