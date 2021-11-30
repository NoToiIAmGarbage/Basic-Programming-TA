#include<iostream>
#include<string>
using namespace std;
int* compare(const char *s, const char *t, int n) {
	int* cmp = (int*)malloc((n + 5) * sizeof(int));
	for(int i = 0; i < n; i ++) {
		cmp[i] = (s[i] == t[i]);
	}
	return cmp;
}
int main() {
	cout << "input n:";
	int n; cin >> n;
	cout << "input a:";
	string a; cin >> a;
	cout << "input b:";
	string b; cin >> b;
	int* res = compare(a.c_str(), b.c_str(), n);
	for(int i = 0; i < n; i ++) {
		cout << res[i];
	}
	return 0;
}