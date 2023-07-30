#include <stdio.h>

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

void main()
{
	double x, Sn, En; int n;
	printf("Input x: ");
	scanf("%lf", &x);
	printf("Input n: ");
	scanf("%d", &n);
	Sn = sum_exp(x, n);
	printf("S(%d) = %lf.\n", n, Sn);
	En = sum_exp_minus(x, n); // 1st sol: use new func
	printf("E(%d) = %lf.\n", n, En);
	En = -sum_exp(-x, n); // 2nd sol: use old func
	printf("E(%d) = %lf.\n", n, En);
}