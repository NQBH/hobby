#include <stdio.h>
int main() {
	long n;
	double S, i = 0;
	printf("Input n = ");
	scanf("%ld", &n);
	for (i = 1; i <= n; ++i)
		S += 1/(i*i);
	printf("Result = %lf.\n", S);
}