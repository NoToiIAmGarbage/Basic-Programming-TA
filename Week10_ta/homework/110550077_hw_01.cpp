#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
void solve(int n, char from, char to, char sup) {
	if(n) {
		solve(n - 1, from, sup, to);
		cout << "Move disk " << n << " from " << from << " to " << to << '\n';
		solve(n - 1, sup, to, from);
	}
}
int main() {
	cout << "Input the number of disks: ";
	int n; cin >> n;
	solve(n, 'A', 'C', 'B');
}