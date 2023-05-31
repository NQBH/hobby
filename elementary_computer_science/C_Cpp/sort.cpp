#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	// Bubble Sort
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n-1; ++j) {
			if (array[j] > array[j+1]) {
				swap(array[j],array[j+1]);
			}
		}
	}

}
// Compile in Terminal:
// g++ -std=c++11 -O2 -Wall sort.cpp -o sort