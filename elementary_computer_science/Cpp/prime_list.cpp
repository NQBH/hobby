#include <iostream>
#include <cmath>
using namespace std;

int is_prime(long n) {
	int prime;
	if (n < 2)
		prime = 0;
	else {
		long i = 2;
		double sqrtN = sqrt(n);
		prime = 1;
		while (i <= sqrtN) {
			if (n % i == 0) {
				prime = 0;
				break;
			}
			++i;
		}

	}
	return prime;
}

void prime_list(long n) {
	for (long i = 2; i <= n; ++i) {
		if (is_prime(i))
			cout << i << " ";
	}
	cout << '\n';
}

void prime_list_odd(long n) {
	printf("2 ");
	for (long i = 3; i <= n; i += 2) {
		if (is_prime(i))
			cout << i << " ";
	}
	cout << '\n';
}

int main() {
	long n;
	cout << "Input n = ";
	cin >> n;
	cout << "isprime(" << n << ") = " << is_prime(n) << ".\n";
	prime_list(n);
	prime_list_odd(n);
}