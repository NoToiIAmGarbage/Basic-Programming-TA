#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void swap(int &x, int &y) {
	int t = x;
	x = y;
	y = t;
}
int main() {
	printf("Input three positive integers (length of length) : ");
	int arr[3];
	for(int i = 0; i < 3; i ++) {
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i < 3; i ++) {
		for(int j = i + 1; j < 3; j ++) {
			if(arr[i] > arr[j]) {
				swap(arr[i], arr[j]);
			}
		}
	}
	if(arr[0] + arr[1] <= arr[2] || arr[0] - arr[1] >= arr[2]) {
		printf("%d %d %d is not a triangle.\n", arr[0], arr[1], arr[2]);
		system("pause");
		return 0;
	}
	printf("%d %d %d can form a triangle.\n", arr[0], arr[1], arr[2]);
	if(arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2]) {
		printf("%d %d %d can form a right triangle.\n", arr[0], arr[1], arr[2]);
	}
	else if(arr[0] * arr[0] + arr[1] * arr[1] < arr[2] * arr[2]) {
		printf("%d %d %d can form a obtuse triangle.\n", arr[0], arr[1], arr[2]);
	}
	else {
		printf("%d %d %d can form a acute triangle.\n", arr[0], arr[1], arr[2]);
	}
	if(arr[0] == arr[1] || arr[1] == arr[2]) {
		printf("%d %d %d can form a isosceles triangle.\n", arr[0], arr[1], arr[2]);
	}
	if(arr[0] == arr[1] && arr[1] == arr[2]) {
		printf("%d %d %d can form a equilateral triangle.\n", arr[0], arr[1], arr[2]);
	}
	system("pause");
	return 0;
}