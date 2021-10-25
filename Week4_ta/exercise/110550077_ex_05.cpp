#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main() {
	srand(time(0));
	int x0 = rand() % 130, y0 = rand() % 130;
	int x1 = rand() % 130, y1 = rand() % 130;
	int x2 = rand() % 130, y2 = rand() % 130;
	printf("point1(%.1f, %.1f)\n", x0 / 100.0, y0 / 100.0);
	printf("point2(%.1f, %.1f)\n", x1 / 100.0, y1 / 100.0);
	printf("point3(%.1f, %.1f)\n", x2 / 100.0, y2 / 100.0);
	double vx0 = 1.0 * (x1 - x0) / 100.0, vy0 = 1.0 * (y1 - y0) / 100.0;
	double vx1 = 1.0 * (x2 - x0) / 100.0, vy1 = 1.0 * (y2 - y0) / 100.0;
	// printf("%f\n", 0.5 * fabs(vx0 * vy1 - vx1 * vy0));
	printf("area:%.1f", 0.5 * fabs(vx0 * vy1 - vx1 * vy0));
	system("pause");
	return 0;
}