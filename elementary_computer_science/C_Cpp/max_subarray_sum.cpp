#include <bits/stdc++.h>
using namespace std;
// Unfinished
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int best;
	// O(n^3)
	best = 0;
	for (int a = 0; a < n; ++a) {
		for (int b = a; b < n; ++b) {
			int sum = 0;
			for (int k = a; k <= b; ++k) {
				sum += array[k];
			}
		}
		best = max(best,sum);
	}
	cout << best << "\n";
	// O(n^2)
	best = 0;
	for (int a = 0; a < n; ++a) {
		int sum = 0;
		for (int b = a; b < n; ++b) {
			sum += array[b];
			best = max(best, sum);
		}
	}
	cout << best << "\n";
	// O(n)
	best = 0;
	int sum = 0;
	for (int k = 0; k < n; ++k) {
		sum = max(array[k], sum + array[k]);
		best = max(best, sum);
	}
	cout << best << "\n";
}
// Compile in Terminal:
// g++ -std=c++11 -O2 -Wall max_subarray_sum.cpp -o max_subarray_sum