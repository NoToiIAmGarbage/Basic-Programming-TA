#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int** matrix_multiplication(int **mat1, int row1, int col1, int **mat2, int row2, int col2) {
	int **res = (int**)malloc(row1 * sizeof(int*));
	for(int i = 0; i < row1; i ++) {
		res[i] = (int*)calloc(col2, sizeof(int));
	}
	for(int i = 0; i < row1; i ++) {
		for(int j = 0; j < col2; j ++) {
			for(int k = 0; k < row2; k ++) {
				res[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}
	return res;
}
int main() {
	cout << "please enter input file: ";
	string str;
	while(cin >> str) {

		FILE* fptr = fopen(str.c_str(), "r");
		int r1 = 0, c1 = 0;
		char c;
		while((c = getc(fptr)) != 'X') {
			r1 = r1 * 10 + c - '0';
		}
		while((c = getc(fptr)) != '\n') {
			c1 = c1 * 10 + c - '0';
		}
		int** arr1 = (int**)malloc(r1 * sizeof(int*));
		for(int i = 0; i < r1; i ++) {
			arr1[i] = (int*)malloc(c1 * sizeof(int));
		}
		for(int i = 0; i < r1; i ++) {
			for(int j = 0; j < c1; j ++) {
				fscanf(fptr, "%d", &arr1[i][j]);
			}
		}
		int r2 = 0, c2 = 0;
		c = getc(fptr); // buffer
		while((c = getc(fptr)) != 'X') {
			r2 = r2 * 10 + c - '0';
		}
		while((c = getc(fptr)) != '\n') {
			c2 = c2 * 10 + c - '0';
		}
		int** arr2 = (int**)malloc(r2 * sizeof(int));
		for(int i = 0; i < r2; i ++) {
			arr2[i] = (int*)malloc(c2 * sizeof(int));
		}
		for(int i = 0; i < r2; i ++) {
			for(int j = 0; j < c2; j ++) {
				fscanf(fptr, "%d", &arr2[i][j]);
			}
		}
		int** res = matrix_multiplication(arr1, r1, c1, arr2, r2, c2);
		for(int i = 0; i < r1; i ++) {
			for(int j = 0; j < c2; j ++) {
				cout << setw(8) << res[i][j] << ' ';
			}
			cout << '\n';
		}
		fclose(fptr);
		cout << "please enter input file: ";
	}
}