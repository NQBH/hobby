#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	float a, b, c;
	cin >> a >> b >> c;
	printf("%.2f\n", (a*a + b*b + c*c)/(a*b*c) + sqrt(a*b*c));
}
// Terminal: g++ -std=c++11 -O2 -Wall algebraic_expression.cpp -o algebraic_expression