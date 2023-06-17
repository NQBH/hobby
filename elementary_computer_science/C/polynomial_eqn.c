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

int main() {
	double a, b, x; int num_sol;
	printf("a = ");
	scanf("%lf", &a);
	printf("b = ");
	scanf("%lf", &b);
	num_sol = linear_eqn(a, b, &x);
	printf("The number of solution of the linear equation %lfx + %lf = 0 is %d.\n", a, b, num_sol);
	if (num_sol == 1)
		printf("The root of the linear equation %lfx + %lf = 0 is %lf.\n", a, b, x);
}