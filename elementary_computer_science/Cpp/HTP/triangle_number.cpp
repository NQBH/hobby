#include <iostream>
#include <math.h>
using namespace std;

int sqr(int x)
{
	return x*x;
}

int kt_tam_giac(int x)
{
	x = (x*8) + 1;
	if (sqr(static_cast<int>(sqrt(x))) != x)
		return 0;
	else 
		return (sqr(x)%2);	
}

int main()
{
	int T,n;
	cin >> T;
	int A[T];
	for (int i=0; i<T; i++)
	{
		cin >> n;
		A[i] = kt_tam_giac(n);
	}
	for (int i=0; i<T; i++)
		cout << A[i] << endl;
	return 0;
}
