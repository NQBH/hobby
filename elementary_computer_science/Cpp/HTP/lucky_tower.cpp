#include <iostream>
using namespace std;

int floors(int x) {
	int tmp = x % 10;
	if (x >= 0)
		if (tmp < 8) 
			return 8 - tmp;
		else {
			x = int(x / 10);
			while (x % 10 == 9)
				x = int(x / 10);
			if (x % 10 == 7)
				return 10 - tmp;
			else 
				return 18 - tmp;
		}
	else {
		x = -x;
		if (x < 9)
			return x + 8;
		else if (x % 10 == 9)
			return 1;
		else {
			tmp = x % 10;
			x = int(x / 10);
			while ((x % 10 == 0) && (int(x / 10) != 0))
				x = int(x / 10);
			if (x % 10 == 9)
				return tmp + 1;
			else 
				return tmp + 2;
		}
	}
}

int main() {
	int a;
	cin >> a;
	cout << floors(a) << '\n';
}
