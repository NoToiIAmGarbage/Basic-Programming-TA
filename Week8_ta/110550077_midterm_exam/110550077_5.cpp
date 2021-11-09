#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int res[1005];
string add(string x, string y) {
	if(x.size() < y.size()) {
		swap(x, y);
	}
	memset(res, 0, sizeof(res));
	for(int i = x.size() - 1, j = y.size() - 1; j >= 0; i --, j --) {
		res[i] = (x[i] - '0') + (y[j] - '0');
	}
	for(int i = x.size() - y.size() - 1; i >= 0; i --) {
		res[i] = x[i] - '0';
	}
	bool flag = false;
	for(int i = x.size() - 1; i >= 0; i --) {
		if(res[i] >= 10) {
			if(i == 0) {
				res[i] -= 10;
				flag = true;
				break;
			}
			res[i - 1] ++;
			res[i] -= 10;
		}
	}
	string r = "";
	if(flag) {
		r += '1';
	}
	for(int i = 0; i < x.size(); i ++) {
		r += (char)(res[i] + '0');
	}
	return r;
}
string mul(string x, string y) {
	int now = 0;
	string final_ans = "0";
	for(int i = y.size() - 1; i >= 0; i --) {
		memset(res, 0, sizeof(res));
		for(int j = x.size() - 1; j >= 0; j --) {
			res[j] = (x[j] - '0') * (y[i] - '0');
		}
		string t = "";
		for(int j = x.size() - 1; j >= 0; j --) {
			if(j == 0) {
				t += (char)(res[j] / 10 + '0');
				res[j] %= 10;
				break;
			}
			res[j - 1] += res[j] / 10;
			res[j] %= 10;
		}
		for(int j = 0; j < x.size(); j ++) {
			t += (char)(res[j] + '0');
		}
		for(int j = 0; j < now; j ++) {
			t += '0';
		}
		now ++;
		final_ans = add(final_ans, t);
	}
	return final_ans;
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	for(int i = 0; i < 5; i ++) {
		string x, y; cin >> x >> y;
		string res = mul(x, y);
		while(res.size() >= 2 && res[0] == '0') {
			res = res.substr(1, res.size() - 1);
		}
		cout << res << '\n';
	}
	return 0;
}