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

void sort_array_int(int a[], int n) {
	for (int i = 0; i < n - 1; ++i)
		for (int j = i + 1; j < n; ++j)
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}

int main() {
	int a[N], n;
	array_int_input(a, n);
	array_int_output(a, n);
	sort_array_int(a, n);
	array_int_output(a, n);
}