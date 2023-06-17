#include <iostream>
#include <cmath>
using namespace std;
double round(double x); // Declare function round()
double round(double x, int n); // Declare function round() with n-digit precision

double round(double x) {
	double ans;
	if (x >= 0)
		ans = floor(x + 0.5);
	else
		ans = -floor(-x + 0.5);
	return ans;
}

double round(double x, int n) {
	double ans, scale = pow(10, n);
	x *= scale;
	if (x >= 0)
		ans = floor(x + 0.5)/scale;
	else
		ans = -floor(-x + 0.5)/scale;
	return ans;
}

int main() {
	double a; int n;
	cout << "Input a = ";
	cin >> a;
	cout << "Round to n = ";
	cin >> n;
	cout << "round(" << a << ") = " << round(a) << ".\n";
	cout << "round(" << a << "," << n << ") = " << round(a, n) << ".\n";
}