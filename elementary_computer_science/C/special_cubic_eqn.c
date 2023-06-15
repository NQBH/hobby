#include <math.h>
#include <stdio.h>
int main() {
	double p, q, y, delta, test;
	printf("p = ");
	scanf("%lf", &p);
	printf("q = ");
	scanf("%lf", &q);
	delta = pow(p, 6.0) + pow(q, 2.0);
	delta = sqrt(delta);
	y = pow(delta - q, 1.0/3) - pow(delta + q, 1.0/3);
	printf("Root y = %lf.\n", y);
	test = y*y*y + 3*p*p*y + 2*q;
	printf("y^3 + 3p^2y + 2q = %lf.\n", test);
	return 1;
}
/*
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ gcc special_cubic_eqn.c -o special_cubic_eqn
/usr/bin/ld: /tmp/ccfehhGa.o: in function `main':
special_cubic_eqn.c:(.text+0x90): undefined reference to `pow'
/usr/bin/ld: special_cubic_eqn.c:(.text+0xaf): undefined reference to `pow'
/usr/bin/ld: special_cubic_eqn.c:(.text+0xc7): undefined reference to `sqrt'
/usr/bin/ld: special_cubic_eqn.c:(.text+0xf9): undefined reference to `pow'
/usr/bin/ld: special_cubic_eqn.c:(.text+0x123): undefined reference to `pow'
collect2: error: ld returned 1 exit status
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ g++ special_cubic_eqn.c -o special_cubic_eqn
*/