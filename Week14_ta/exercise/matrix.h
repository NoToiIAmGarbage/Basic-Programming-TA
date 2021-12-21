#ifndef __matrix__
#define __matrix__

#include "vector.h"

typedef struct _matrix2D {
	int row, column;
	vector* mat;
} matrix2D;

matrix2D* matrix2D_construct(int m, int n);

void matrix2D_fillwith(matrix2D* A, int num);

matrix2D* matrix2D_multiple(matrix2D* A, matrix2D* B);

#endif