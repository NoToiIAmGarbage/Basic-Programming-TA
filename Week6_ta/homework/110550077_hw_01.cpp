#include<stdio.h>
#include<string>
#include<iostream>
#include<vector>
using namespace std;
char tmp[10005];
int main() {
	FILE* input = fopen("input.txt", "r");
	freopen("output.txt", "w", stdout);
	vector<string> V, tar;
	while(fgets(tmp, 9999, input) != nullptr) {
		string str(tmp);
		V.push_back(str);
	}
	int n; cin >> n;
	for(int i = 0; i < n; i ++) {
		string str; cin >> str;
		tar.push_back(str);
	}
	for(string str : V) {
		for(string x : tar) {
			int ind = 0;
			while(ind + x.size() - 1 < str.size()) {
				if(str.substr(ind, x.size()) == x) {
					str = str.substr(0, ind) + "***" + str.substr(ind + x.size(), str.size() - (ind + x.size()) + 1);
				}
				ind ++;
			}
		}
		cout << str << '\n';
	}
}