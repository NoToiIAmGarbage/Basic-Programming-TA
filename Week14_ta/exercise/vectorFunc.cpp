#include <stdlib.h>

// typedef struct _vector {
// 	int length;
// 	int* vec;
// } vector;

vector* vector_construct(int length) {
	vector* res = new vector;
	res -> length = length;
	res -> vec = (int*)malloc(length * sizeof(int));
	return res;
}