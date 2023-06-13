#include <stdio.h>
template <class T>
void swap(T *x, T *y) {
	T u = *x;
	*x = *y;
	*y = u;
}

void swap(auto& x, auto& y) {
	auto u = x;
	x = y;
	y = u;
}

int main() {
	float a = 186, b = 273;
	swap(&a, &b);
	printf("New values of a & b now are a = %f,  = %f.\n", a, b);
	return 0;
}
// g++ -std=c++20 -O2 -Wall swap.cpp -o swap