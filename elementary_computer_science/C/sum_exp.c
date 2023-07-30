#include <stdio.h>

double sum_exp(double x, int n) {
	double Sn = 0, y = 1;
	for (int i = 1; i <= n; ++i) {
		y *= x;
		Sn += y/i;
	}
	return Sn;
}

void main()
{
	double x, Sn; int n;
	printf("Input x: ");
	scanf("%lf", &x);
	printf("Input n: ");
	scanf("%d", &n);
	Sn = sum_exp(x, n);
	printf("Result: %lf.\n", Sn);
}