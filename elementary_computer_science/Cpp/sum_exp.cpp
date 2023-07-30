#include <iostream>
using namespace std;

double sum_exp(double x, int n) {
	double Sn = 0, y = 1;
	for (int i = 1; i <= n; ++i) {
		y *= x;
		Sn += y/i;
	}
	return Sn;
}

double sum_exp_minus(double x, int n) {
	double En = 0, y = -1;
	x = -x;
	for (int i = 1; i <= n; ++i) {
		y *= x;
		En += y/i;
	}
	return En;
}

int main() {
	double x; int n;
	cout << "Input x: ";
	cin >> x;
	cout << "Input n: ";
	cin >> n;
	double Sn = sum_exp(x, n);
	cout << "S(" << n << ") = " << Sn << ".\n";
	double En = sum_exp_minus(x, n);
	cout << "E(" << n << ") = " << En << ".\n";
	En = -sum_exp(-x, n);
	cout << "E(" << n << ") = " << En << ".\n";
}