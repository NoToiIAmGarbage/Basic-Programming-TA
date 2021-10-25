#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define int long long int
using namespace std;
int mypow(int x, int y, int mod) {
	int res = 1;
	while(y) {
		if(y & 1) {
			res = res * x % mod;
		}
		x = x * x % mod;
		y >>= 1;
	}
	return res;
}
bool MR(int a, int b) {
	int u = b - 1, k = 0;
	while(u % 2 == 0) {
		u /= 2;
		k ++;
	}
	a = mypow(a, u, b);
	for(int i = 0; i < k; i ++) {
		int na = a * a % b;
		if(na == 1 && a != 1 && a != b - 1) {
			return false;
		}
		a = na;
	}
	return a == 1;
}
bool check(int x) {
	if(x == 1) return false;
	int prime[3] = {2, 7, 61};
	for(int i=0; i < 3; i ++) {
		if(x == prime[i]) return true;
		if(!MR(prime[i], x)) return false;
	}
	return true;
}
signed main() {
	double START = clock();
	for(int i = 1; i <= 80000; i ++) {
		if(check(i)) {
			printf("%d\n", i);
		}
	}
	double END = clock();
	printf("Time: %1f\n", (END - START) / CLOCKS_PER_SEC);
	system("pause");
	return 0;
}