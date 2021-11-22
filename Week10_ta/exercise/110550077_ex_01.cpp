#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int solve(int ind, int t, vector<int>& V) {
	if(ind == -1) {
		return t;
	}
	return solve(ind - 1, t + V[ind], V);
}
int main() {
	cout << "Please input an array(size less than 10): ";
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
	cout << "How many elements to sum from head: ";
	int k; cin >> k;
	if(k > V.size()) {
		cout << "Out of range.\n";
	}
	else {
			cout << "The summation is " << solve(k - 1, 0, V) << ".\n";
	}
}