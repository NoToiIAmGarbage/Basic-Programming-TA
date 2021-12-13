#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
using namespace std;
double callback_execution(double* parms, double(**callbacks)(double, double), int num_of_callback) {
	double res = parms[0];
	for(int i = 1; i < num_of_callback; i ++) {
		res = callbacks[i - 1](res, parms[i]);
	}
	return res;
}
double add(double x, double y) {
	return x + y;
}
double sub(double x, double y) {
	return x - y;
}
double mul(double x, double y) {
	return x * y;
}
double div(double x, double y) {
	return x / y;
}
int main() {
	cout << "Enter whether to continue or quit(1,0): ";
	int d;
	while(cin >> d && d) {
		int c = 0;
		cout << c ++ << " Enter paramter and function code(+,-,*,/): ";
		double x; char y;
		int res = 0;
		double(*op[1005])(double, double);
		double par[1005];
		while(cin >> x >> y) {
			par[c - 1] = x;
			if(y == '+') {
				op[c - 1] = add;
			}
			else if(y == '-') {
				op[c - 1] = sub;
			}
			else if(y == '*') {
				op[c - 1] = mul;
			}
			else if(y == '/') {
				op[c - 1] = div;
			}
			else {
				break;
			}
			cout << c ++ << " Enter paramter and function code(+,-,*,/): ";
		}
		cout << fixed << setprecision(6) << "Final Result: " << callback_execution(par, op, c) << '\n';
		cout << "Enter whether to continue or quit(1,0): ";
		c = 0;
	}
}