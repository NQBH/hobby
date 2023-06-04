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
	// C++'s sort efficiently sort elements of a vector in increasing order
	vector<int> v = {4,2,5,3,5,8,3};
	sort(v.begin(), v.end());
	// C++'s sort sorts decreasingly
	sort(v.rbegin(), v.rend());
	// Sort an ordinary array
	int A[] = {4,2,5,3,5,8,3};
	sort(A.begin(), A.end()) // sort(a, a + n); // original
	// Sort a string
	string S = "monkey";
	sort(S.begin(), S.end());
	return 1;
}
// Compile in Terminal:
// g++ -std=c++11 -O2 -Wall sort.cpp -o sort