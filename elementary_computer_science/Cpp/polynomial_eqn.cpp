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

int quadratic_eqn(double a, double b, double c, double& x1, double& x2) {
	int num_sol;
	x1 = x2 = 0; // default
	if (a == 0)
		num_sol = linear_eqn(b, c, x1);
	else {
		double Delta = b*b - 4*a*c, two_a = 2*a;
		if (Delta < 0)
			num_sol = NoSolution;
		else if (Delta == 0) {
			x1 = x2 = -b/two_a;
			num_sol = 1;
		}
		else {
			double sqrtDelta = sqrt(Delta);
			x1 = (-b - sqrtDelta)/two_a;
			x2 = (-b + sqrtDelta)/two_a;
			num_sol = 2;
		}
	}
	return num_sol;
}

int main() {
	double a, b, c, x, x1, x2;
	int num_sol_linear, num_sol_quadratic;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	num_sol_linear = linear_eqn(a, b, x);
	cout << "The number of solution of the linear equation " << a << "x + " << b << " = 0 is " << num_sol_linear << ".\n";
	if (num_sol_linear == 0)
		cout << "The linear equation " << a << "x + " << b << " = 0 has no real root." << ".\n";
	else
		cout << "The only/unique root of the linear equation " << a << "x + " << b << " = 0 is " << x << ".\n";
	num_sol_quadratic = quadratic_eqn(a, b, c, x1, x2);
	cout << "The number of solution of the quadratic equation " << a << "x^2 + " << b << "x + " << c << " = 0 is " << num_sol_quadratic << ".\n";
	if (num_sol_quadratic == 0)
		cout << "The quadratic equation " << a << "x^2 + " << b << "x + " << c << " = 0 has no real root." << ".\n";
	else if (num_sol_quadratic == 1)
		cout << "The only/unique root of the quadratic equation " << a << "x^2 + " << b << "x + " << c << " = 0 is " << x1 << ".\n";
	else
		cout << "The 2 real roots of the quadratic equation " << a << "x^2 + " << b << "x + " << c << " = 0 are " << x1 << ", " << x2 << ".\n";
}