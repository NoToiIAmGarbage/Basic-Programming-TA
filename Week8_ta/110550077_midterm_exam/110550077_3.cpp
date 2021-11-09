#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main() {
	map<char, int> M;
	M['I'] = 1; M['V'] = 5; M['X'] = 10;
	M['L'] = 50; M['C'] = 100; M['D'] = 500; M['M'] = 1000;
	cout << "Roman numeral: ";
	string str; cin >> str;
	int res = 0;
	for(int i = 0; i < str.size(); i ++) {
		if(i + 1 < str.size() && M[str[i]] < M[str[i + 1]]) {
			res -= M[str[i]];
		}
		else {
			res += M[str[i]];
		}
	}
	cout << "This roman numeral is " << res << ".\n";
	return 0;
}