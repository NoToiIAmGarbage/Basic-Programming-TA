#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	FILE* fptr = fopen("p5.txt", "r");
	int arr[205];
	for(int i = 0; i < 200; i ++) {
		fscanf(fptr, "%d", &arr[i]);
	}
	int res = 0;
	for(int i = 0; i < 200; i ++) {
		for(int j = i + 1; j < 200; j ++) {
			for(int k = j + 1; k < 200; k ++) {
				if(max({arr[i], arr[j], arr[k]}) - min({arr[i], arr[j], arr[k]}) <= 2) {
					res ++;
				}
			}
		}
	}
	cout << "The number of Close Tuples is " << res << '\n';
	return 0;
}