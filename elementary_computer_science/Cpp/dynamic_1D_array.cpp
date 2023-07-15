#include <iostream>
using namespace std;

int* array_input(int& n) {
	int *a = NULL; // a will keep address of beginning of array
	while (1) {
		cout << "Number of elements will be used: ";
		cin >> n;
		if (n < 0)
			cout << "Wrong input, reinput:\n";
		else
			break;
	}
	a = new int[n]; // Inquire n elements of int type
	if (a == NULL) { // Cannot provide dynamic memory
		n = 0;
		return NULL;
	}
	for (int i = 0; i < n; ++i) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	return a;
}

void array_output(int a[], int n) {
	cout << "a[]:";
	for (int i = 0; i < n; ++i)
		cout << " " << a[i];
	cout << ".\n";
}

int main() {
	int n;
	int* b = array_input(n);
	if (n > 0) {
		array_output(b, n);
		delete[] b; // Free memory
	}
}