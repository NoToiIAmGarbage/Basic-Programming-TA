#include "matrix.h"
#include <stdlib.h>

// typedef struct _matrix2D {
// 	int row, column;
// 	vector* mat;
// } matrix2D;

matrix2D* matrix2D_construct(int m, int n) {
	matrix2D* res = new matrix2D;
	res -> row = m; res -> column = n;
	res -> mat = (vector*)malloc(m * sizeof(vector));
	for(int i = 0; i < m; i ++) {
		res -> mat[i] = *(vector_construct(n));
	}
	return res;
}

void matrix2D_fillwith(matrix2D* A, int num) {
	int n = A -> row, m = A -> column;
	for(int i = 0; i < n; i ++) {
		for(int j = 0; j < m; j ++) {
			A -> mat[i].vec[j] = num;
		}
	}
}

matrix2D* matrix2D_multiple(matrix2D* A, matrix2D* B) {
	int n = A -> row, m = B -> column, t = A -> column;
	matrix2D* res = matrix2D_construct(n, m);
	matrix2D_fillwith(res, 0);
	for(int i = 0; i < n; i ++) {
		for(int j = 0; j < m; j ++) {
			for(int k = 0; k < t; k ++) {
				res -> mat[i].vec[j] += (A -> mat[i].vec[k]) * (B -> mat[k].vec[j]);
			}
		}
	}
	return res;
}