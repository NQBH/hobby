#include <cstdio>
#include <iostream>
using namespace std;
int main() {
	int a[] = {0, 1, 2, 3, 4, 5};
	for (int x : a)
		cout << x << ' ';
	cout << "Input new elements:\n";
	for (int& x : a)
		cin >> x;
}