#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
int main() {
	map<string, char> M;
    M["*-"] = 'A'; M["-***"] = 'B'; M["-*-*"] = 'C'; M["-**"] = 'D'; M["*"] = 'E';
    M["**-*"] = 'F'; M["--*"] = 'G'; M["****"] = 'H'; M["**"] = 'I'; M["*---"] = 'J';
    M["-*-"] = 'K'; M["*-**"] = 'L'; M["--"] = 'M'; M["-*"] = 'N'; M["---"] = 'O';
    M["*--*"] = 'P'; M["--*-"] = 'Q'; M["*-*"] = 'R'; M["***"] = 'S'; M["-"] = 'T';
    M["**-"] = 'U'; M["***-"] = 'V'; M["*--"] = 'W'; M["-**-"] = 'X'; M["-*--"] = 'Y';
    M["--**"] = 'Z';
    freopen("input.txt", "r", stdin);
    string str;
    vector<string> V;
    while(cin >> str) {
    	V.push_back(str);
    }
    string morse; 
    for(string x : V) {
    	vector<int> v;
    	int now = 1;
    	for(int i = 1; i < x.size(); i ++) {
    		if(x[i] != x[i - 1]) {
    			v.push_back(now);
    			now = 1;
    		}
    		else {
    			now ++;
    		}
    	}
    	v.push_back(now);
    	string tmp = "";
    	for(int i = 0; i < v.size(); i ++) {
    		// cout << v[i] << ' ';
    		if(i & 1) {
    			if(v[i] == 7) {
    				cout << M[tmp] << ' ';
    				tmp = "";
    			}
    			else if(v[i] == 3) {
    				cout << M[tmp];
    				tmp = "";
    			}
    		}
    		else {
	    		if(v[i] == 3) {
	    			tmp += '-';
	    		}
	    		else {
	    			tmp += '*';
	    		}
    		}
    	}
    	cout << '\n';
    }
    return 0;
}