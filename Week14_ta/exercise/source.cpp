#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

#include "vector.h"
#include "matrix.h"
#include "vectorFunc.cpp"
#include "matrixFunc.cpp"

int main() {
	int r1, c1, r2, c2, x, y;
	cin >> r1 >> c1 >> r2 >> c2 >> x >> y;
	if(c1 != r2) {
		cout << "shape error\n";
		return 0;
	}
	matrix2D* A = matrix2D_construct(r1, c1);
	matrix2D* B = matrix2D_construct(r2, c2);
	matrix2D_fillwith(A, x);
	matrix2D_fillwith(B, y);
	matrix2D* res = matrix2D_multiple(A, B);
	for(int i = 0; i < r1; i ++) {
		for(int j = 0; j < c2; j ++) {
			cout << res -> mat[i].vec[j] << ' ';
		}
		cout << '\n';
	}
	return 0;
}