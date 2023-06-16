#include <stdio.h>
int main() {
	long n, sum, k;
	printf("Input n = ");
	scanf("%ld", &n);
	sum = 0, k = 1;
	while (sum + k <= n) {
		sum += k;
		++k;
	}
	--k;
	printf("k = %ld.\n", k);
	printf("Sum of 1st k positive integers = %ld.\n", sum);
	if (sum == n)
		printf("%ld is the sum of 1st k positive integers.\n", n);
	else
		printf("%ld is not the sum of 1st k positive integers.\n", n);
}