#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main() {
	cout << "Input an integer:";
	int n; cin >> n;
	int cnt = 0;
	cout << "Output:\n";
	for(int i = 2; i <= n; i ++) {
		bool yes = true;
		for(int j = 2; j * j <= i; j ++) {
			if(i % j == 0) {
				yes = false;
				break;
			}
		}
		if(yes) {
			cout << i << ' ';
			cnt ++;
			if(cnt % 10 == 0) {
				cout << '\n';
			}
		}
	}
	return 0;
}