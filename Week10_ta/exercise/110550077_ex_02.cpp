#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int solve(int left, int right, vector<int>& V, int x) {
	if(left > right) {
		return -1;
	}
	int mid = (left + right) >> 1;
	if(V[mid] == x) {
		return mid;
	}
	else if(V[left] < x) {
		return solve(mid + 1, right, V, x);
	}
	else {
		return solve(left, mid - 1, V, x);
	}
}
int main() {
	cout << "Please input a sorted array(size less than 10): ";
	string str;
	getline(cin, str);
	vector<int> V;
	int now = 0;
	for(int i = 0; i < str.size(); i ++) {
		if(str[i] == ' ') {
			V.push_back(now);
			now = 0;
		}
		else {
			now = now * 10 + str[i] - '0';
		}
	}
	V.push_back(now);
	cout << "Please input the number you want to find: ";
	int x; cin >> x;
	int d = solve(0, V.size() - 1, V, x);
	if(d == -1) {
		cout << "Could not find the number.\n";	
	}
	else {
		cout << "The number is at the index " << d << ".\n";
	}
	return 0;
}