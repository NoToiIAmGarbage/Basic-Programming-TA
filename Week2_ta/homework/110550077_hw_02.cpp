#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	float height, weight;
	printf("Height:");
	scanf("%f", &height);
	printf("Weight:");
	scanf("%f", &weight);
	height /= 100.0;
	float BMI = weight / height / height;
	printf("BMI:%.2f\n", BMI);
	BMI = (int)(BMI + 0.4);
	printf("BMI after rounding:%.2f", BMI);
}