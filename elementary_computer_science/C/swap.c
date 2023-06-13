#include <stdio.h>
#include <math.h>
void swap(float *x, float *y) {
	float u = *x;
	*x = *y;
	*y = u;
}

void ajust(float *x, float *y) {
	if (fabs(*x) > fabs(*y))
		swap(x, y); // swap(&(*x), &(*y)); // <=>
}

int main() {
	float a = 186, b = 273, A = -1864.5F, B = 273.9F;
	swap(&a, &b);
	printf("New values of a & b now are a = %f,  = %f.\n", a, b);
	ajust(&A, &B);
	printf("New values of A & B now are A = %f,  = %f.\n", A, B);
	return 0;
}