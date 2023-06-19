#include <stdio.h>
#include <math.h>
#define NoSolution 0
#define Undetermined -1
int linear_eqn(double a, double b, double *x) {
	int num_sol;
	if (a != 0) {
		*x = -b/a;
		num_sol = 1;
	}
	else { // a = 0
		*x = 0;
		if (b == 0)
			num_sol = Undetermined;
		else
			num_sol = NoSolution;
	}
	return num_sol;
}

int quadratic_eqn(double a, double b, double c, double *x1, double *x2) {
	int num_sol;
	*x1 = *x2 = 0; // default
	if (a == 0)
		num_sol = linear_eqn(b, c, x1); // x1 is the same as &(*x1)
	else {
		double Delta = b*b - 4*a*c, two_a = 2*a;
		if (Delta < 0)
			num_sol = NoSolution;
		else if (Delta == 0) {
			*x1 = *x2 = -b/two_a;
			num_sol = 1;
		}
		else {
			double sqrtDelta = sqrt(Delta);
			*x1 = (-b - sqrtDelta)/two_a;
			*x2 = (-b + sqrtDelta)/two_a;
			num_sol = 2;
		}
	}
	return num_sol;
}

int main() {
	double a, b, c, x, x1, x2;
	int num_sol_linear, num_sol_quadratic;
	printf("a = ");
	scanf("%lf", &a);
	printf("b = ");
	scanf("%lf", &b);
	printf("c = ");
	scanf("%lf", &c);
	num_sol_linear = linear_eqn(a, b, &x);
	printf("The number of solution of the linear equation %lfx + %lf = 0 is %d.\n", a, b, num_sol_linear);
	if (num_sol_linear == 0)
		printf("The linear equation %lfx + %lf = 0 has no real root.\n", a, b);
	else
		printf("The only/unique root of the linear equation %lfx + %lf = 0 is %lf.\n", a, b, x);
	num_sol_quadratic = quadratic_eqn(a, b, c, &x1, &x2);
	printf("The number of solution of the quadratic equation %lfx^2 + %lfx + %lf = 0 is %d.\n", a, b, c, num_sol_quadratic);
	if (num_sol_quadratic == 0)
		printf("The quadratic equation %lfx^2 + %lfx + %lf = 0 has not real root", a, b, c);
	else if (num_sol_quadratic == 1)
		printf("The only/unique root of the quadratic equation %lfx^2 + %lfx + %lf = 0 is %lf.\n", a, b, c, x1);
	else
		printf("The only/unique root of the quadratic equation %lfx^2 + %lfx + %lf = 0 are %lf, %lf.\n", a, b, c, x1, x2);
}