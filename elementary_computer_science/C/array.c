#include <stdio.h>
#define N 50 // const int N = 50;
void array_int_input(int a[N], int& n) {
	while (1) {
		printf("Number of elements will be used (<= %d): ", N);
		scanf("%d", &n);
		if ((n < 0) || (n > N))
			printf("Wrong input, reinput ...\n");
		else
			break;
	}
	for (int i = 0; i < n; ++i) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void array_int_output(int a[N], int n) {
	printf("a[]:");
	for (int i = 0; i < n; ++i)
		printf(" %d", a[i]);
	printf(".\n");
}

int main() {
	int n = 10, a[N];
	array_int_input(a, n);
	array_int_output(a, n);
}