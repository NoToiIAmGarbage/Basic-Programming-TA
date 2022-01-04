#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
using namespace std;
struct thing {
	char name[20];
	bool sex;
	double arr[4];
} pat[10];
void cov() {
	
}
int main() {
	FILE* fptr = fopen("patients_data.txt", "r");
	for(int i = 0; i < 10; i ++) {
		char arr[20];
		fscanf(fptr, "%s %d ", pat[i].name, &pat[i].sex);
		for(int j = 0; j < 4; j ++) {	
			fscanf(fptr, "%lf", &pat[i].arr[j]);
		}
	}
	cout << "please input the size of data.\n";
	int n; cin >> n;
	cout << "please input which sex we want to select\n";
	int s; cin >> s;
	cout << "please input which attribute we want to choose.\n";
	int at; cin >> at;
	cout << "please input the range of concern.\n";
	double low, up; cin >> low >> up;
	for(int i = 0; i < n; i ++) {
		if(pat[i].sex == s || s == 2) {
			if(pat[i].arr[at] >= low && pat[i].arr[at] <= up) {
				printf("%s %d ", pat[i].name, pat[i].sex);
				for(int j = 0; j < 4; j ++) {
					cout << fixed << setprecision(6) << pat[i].arr[j] << ' ';
				}
				cout << '\n';
			}
		}
	}
	return 0;
}