#define _CRT_SECURE_NO_WARNINGS
#include<cassert>
#include<iostream>
using namespace std;
int sz[4] = {5, 4, 7, 0}, n = 3;
void output(int** A, int step) {
	cout << "step " << step << ":\n";
	for(int i = 0; i < n; i ++) {
		for(int j = 0; j < sz[i]; j ++) {
			cout << A[i][j] << ' ';
		}
		cout << '\n';
	}
}
int main() {
	int c = 0;
	int **A = (int**)malloc(3 * sizeof(int*));
	// Create a array of pointers

	A[0] = (int*)calloc(5, sizeof(int));
	A[1] = (int*)calloc(4, sizeof(int));
	A[2] = (int*)calloc(7, sizeof(int));
	output(A, ++ c);
	// initialize with size of {5, 4, 7}

	int* newA1 = (int*)realloc(A[1], 9 * sizeof(int));
	sz[1] = 9;
	A[1] = newA1;
	fill(A[1] + 4, A[1] + 9, 1);
	output(A, ++ c);
	// extend A[1] to size of 9 and fill with 1

	int** newA = (int**)realloc(A, 4 * sizeof(int*));
	n ++;
	A = newA;
	A[3] = (int*)malloc(2 * sizeof(int));
	sz[3] = 2;
	fill(A[3], A[3] + 2, 2);
	output(A, ++ c);
	// extend A's size by 1 and fill with 2

	int** newnewA = (int**)realloc(A, 3 * sizeof(int*));
	n --;
	newnewA[1] = A[2]; newnewA[2] = A[3];
	sz[1] = sz[2]; sz[2] = sz[3]; sz[3] = 0;
	A = newnewA;
	output(A, ++ c);
	// delete A[1];
}