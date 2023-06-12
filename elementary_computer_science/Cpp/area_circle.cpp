#include <iostream>
#include <math.h>
using namespace std;
int main() {
	// const float Pi = 3.14159
	float R, area;
	cin >> R;
	if (R < 0) {
		cout << "Error R < 0.\n";
		exit(0);
	}
	area = M_PI*R*R;
	cout << "The area of the circle whose radius R = " << R << " is " << area << '\n';
}
// Terminal: g++ -std=c++11 -O2 -Wall area_circle.cpp -o area_circle