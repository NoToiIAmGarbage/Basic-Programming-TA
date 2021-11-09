#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<math.h>
#include<utility>
using namespace std;
double dist(pair<double, double> x, pair<double, double> y) {
	double one = x.first - y.first;
	double two = x.second - y.second;
	return one * one + two * two;
}
int main() {
	pair<double, double> arr[3];
	cout << "Input the first point in R^2 space x,y = ";
	cin >> arr[0].first >> arr[0].second;
	cout << "Input the second point in R^2 space x,y = ";
	cin >> arr[1].first >> arr[1].second;
	cout << "Input the third point in R^2 space x,y = ";
	cin >> arr[2].first >> arr[2].second;
	double one = dist(arr[0], arr[1]), two = dist(arr[0], arr[2]), three = dist(arr[1], arr[2]);
	if(one > two) {
		swap(one, two);
	}
	if(one > three) {
		swap(one, three);
	}
	if(two > three) {
		swap(two, three);
	}
	cout << "Output:\n";
	if(sqrt(one) + sqrt(two) <= sqrt(three) || sqrt(one) - sqrt(two) >= sqrt(three)) {
		cout << "These three point cannot form a triangle.\n";
		return 0;
	}
	if(fabs(one + two - three) < 1e-5) {
		cout << "These three point form a right triangle.\n";
	}
	else if(one + two < three) {
		cout << "These three point form an obtuse triangle.\n";
	}
	else {
		cout << "These three point form an acute triangle.\n";
	}
	return 0;
}