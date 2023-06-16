#include <iostream>
#include <cmath>
using namespace std;
double round(double x); // Declare function round()
double round(double x) {
	double ans;
	if (x >= 0)
		ans = floor(x + 0.5);
	else
		ans = -floor(-x + 0.5);
	return ans;
}
int main() {
	double a;
	cout << "Input a = ";
	cin >> a;
	double y = round(a);
	cout << "round(" << a << ") = " << y << ".\n";
}