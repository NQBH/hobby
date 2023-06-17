#include <cmath>
#include <iostream>
using namespace std;
const int NoSolution = 0, Undetermined = -1;
int linear_eqn(double a, double b, double& x) {
	int num_sol;
	if (a != 0) {
		x = -b/a;
		num_sol = 1;
	}
	else { // a = 0
		x = 0;
		if (b == 0)
			num_sol = Undetermined;
		else
			num_sol = NoSolution;
	}
	return num_sol;
}

int main() {
	double a, b, x; int num_sol;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	num_sol = linear_eqn(a, b, x);
	cout << "The number of solution of the linear equation " << a << "x + " << b << " = 0 is " << num_sol << ".\n";
	if (num_sol == 1)
		cout << "The root of the linear equation " << a << "x + " << b << " = 0 is " << x << ".\n";
}