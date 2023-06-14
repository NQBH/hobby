#include <iostream>
using namespace std;
#define MAXSZ 256
int main() {
	char str[MAXSZ + 1];
	string str1, str2;
	cout << "1st string: ";
	cin.getline(str, MAXSZ);
	str1 = str;
	fflush(NULL); // _flushall();
	cout << "2nd string: ";
	cin.getline(str, MAXSZ);
	str2 = str;
	cout << "Our strings are:\n" << str1.c_str() << '\n' << str2.c_str() << '\n';
	return 1;
}