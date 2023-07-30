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

int main() {
	double x; int n;
	cout << "Input x: ";
	cin >> x;
	cout << "Input n: ";
	cin >> n;
	double Sn = sum_exp(x, n);
	cout << "Result: " << Sn << ".\n";
}