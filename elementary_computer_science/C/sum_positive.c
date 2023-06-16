#include <stdio.h>
int main() {
	float sum = 0, x = 1;
	while (x > 0) {
		printf("Input a positive number: ");
		scanf("%f", &x);
		if (x > 0)
			sum += x;
	}
	printf("Sum all positive numbers input = %f.\n", sum);
	sum = 0;
	do {
		printf("Input a positive number: ");
		scanf("%f", &x);
		if (x > 0)
			sum += x;
	} while (x > 0);
	printf("Sum all positive numbers input = %f.\n", sum);
}