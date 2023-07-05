#include <iostream>
using namespace std;

int Fib1(int n) {
	int a, b, c, k;
	if (n <= 1)
		return n;
	a = 0; b = 1;
	for (k = 2; k <= n; ++k) {
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}

int main() {
	int n;
	cin >> n;
	cout << "F_n = " << Fib1(n) << ".\n";
}