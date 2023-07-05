#include <iostream>
using namespace std;
const int min_year = 1900, max_year = 10000;

int check_leap_year(int year) {
	int ans;
	if (year < min_year || year > max_year)
		ans = -1;
	else {
		if (year % 4 != 0)
			ans = 0;
		else {
			if (year % 100 != 0)
				ans = 1;
			else {
				if (year % 400 == 0)
					ans = 1;
				else
					ans = 0;
			}
		}
	}
	return ans;
}

int check_leap_year_short(int year) {
	int ans;
	if (year < min_year || year > max_year)
		ans = -1;
	else if (year % 4 != 0)
		ans = 0;
	else if (year % 100 != 0)
		ans = 1;
	else if (year % 400 == 0)
		ans = 1;
	else
		ans = 0;
	return ans;
}

int main() {
	int n;
	cin >> n;
	cout << "Leap year: " << check_leap_year(n) << ", " << check_leap_year_short(n) << ".\n";
}