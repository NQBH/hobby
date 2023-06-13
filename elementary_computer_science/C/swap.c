#include <stdio.h>
void swap(float *x, float *y) {
	float u = *x;
	*x = *y;
	*y = u;
}

int main() {
	float a = 186, b = 273;
	swap(&a, &b);
	printf("New values of a & b now are a = %f,  = %f.\n", a, b);
	return 0;
}