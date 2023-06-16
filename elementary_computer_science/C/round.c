#include <stdio.h>
#include <math.h>
double round(double x); // Declare function round()
double round(double x) {
	double ans;
	if (x >= 0)
		ans = floor(x + 0.5);
	else
		ans = -floor(-x + 0.5);
	return ans;
}
int main() {
	double a, y;
	printf("Input a = ");
	scanf("%lf", &a);
	y = round(a);
	printf("round(%lf) = %lf.\n", a, y);
}
/*
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ gcc round.c -o round
/usr/bin/ld: /tmp/ccnM9Bnx.o: in function `round':
round.c:(.text+0x3c): undefined reference to `floor'
/usr/bin/ld: round.c:(.text+0x63): undefined reference to `floor'
collect2: error: ld returned 1 exit status
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ g++ round.c -o round
*/