#include <stdio.h>
#include <math.h>

double Func(double x) {
	return pow(x, 9) + x + 1;
}

double Func_n(double x, int n) {
	return pow(x, 2*n + 1) + x + 1;
}

void Solve(double *x) {
	const double epsilon = 0.000000001;
	double left = -1, right = 0;
	while (right - left > epsilon) {
		double mid = (left + right)/2;
		if (Func(left)*Func(mid) < 0)
			right = mid;
		else
			left = mid;
	}
	*x = (left + right)/2;
}

void Solve_n(double *x, int n) {
	const double epsilon = 0.000000001;
	double left = -1, right = 0;
	while (right - left > epsilon) {
		double mid = (left + right)/2;
		if (Func_n(left, n)*Func_n(mid, n) < 0)
			right = mid;
		else
			left = mid;
	}
	*x = (left + right)/2;
}

int main() {
	double x;
	int n;
	printf("n = ");
	scanf("%d", &n);
	Solve(&x);
	printf("x = %lf.\n", x);
	printf("Test: %lf.\n", Func(x));
	Solve_n(&x, n);
	printf("x = %lf.\n", x);
	printf("Test: %lf.\n", Func_n(x, n));

}
/*
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ gcc approximate_solution.c -o approximate_solution
/usr/bin/ld: /tmp/ccq7gbyS.o: in function `Func':
approximate_solution.c:(.text+0x27): undefined reference to `pow'
collect2: error: ld returned 1 exit status
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ g++ approximate_solution.c -o approximate_solution
*/