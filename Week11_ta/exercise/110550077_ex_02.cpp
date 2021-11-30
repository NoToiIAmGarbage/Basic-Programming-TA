#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int d, arr1[100005], arr2[100005];
int* merge(int* ptr1, int size1, int* ptr2, int size2) {
	int* res = (int*)malloc((size1 + size2) * sizeof(int) + 5);
	int ind1 = 0, ind2 = 0, m = 1;
	while(ind1 < size1 && ind2 < size2) {
		if(ptr1[ind1] < ptr2[ind2]) {
			res[m ++] = ptr1[ind1 ++];
		}
		else if(ptr1[ind1] > ptr2[ind2]) {
			res[m ++] = ptr2[ind2 ++];
		}
		else {
			res[m ++] = ptr1[ind1 ++];
			ind2 ++;
		}
	}
	while(ind1 < size1) {
		res[m ++] = ptr1[ind1 ++];
	}
	while(ind2 < size2) {
		res[m ++] = ptr2[ind2 ++];
	}
	res[0] = m;
	return res;
}
int main() {
	cout << "enter 1 to compare or 0 to quit : ";
	while(cin >> d && d) {
		cout << "plz enter your array on the new line: ";
		getchar();
		string str;
		getline(cin, str);
		int now = 0, m1 = 0, m2 = 0;
		for(int i = 0; i < str.size(); i ++) {
			if(str[i] == ' ') {
				arr1[m1 ++] = now;
				now = 0;
			}
			else {
				now = now * 10 + str[i] - '0';
			}
		}
		arr1[m1 ++] = now;
		now = 0;
		cout << "plz enter your array on the new line: ";
		getline(cin, str);
		now = 0;
		for(int i = 0; i < str.size(); i ++) {
			if(str[i] == ' ') {
				arr2[m2 ++] = now;
				now = 0;
			}
			else {
				now = now * 10 + str[i] - '0';
			}
		}
		arr2[m2 ++] = now;
		now = 0;
		int* res = merge(arr1, m1, arr2, m2);
		for(int i = 1; i < res[0]; i ++) {
			cout << setw(4) << res[i];
			if(i % 5 == 0) {
				cout << '\n';
			}
		}
		cout << '\n';
		cout << "enter 1 to compare or 0 to quit : ";
	}
	return 0;
}