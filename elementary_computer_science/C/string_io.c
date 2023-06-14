#include <stdio.h>
#include <string.h>
#define MAXSZ 256
int main () {
	char str1[MAXSZ + 1];
	char str2[MAXSZ + 1];
	printf("1st string: ");
	fgets(str1, sizeof str1, stdin); // gets_s(str1, MAXSZ);
	fflush(NULL); // _flushall();
	printf("2nd string: ");
	fgets(str2, sizeof str2, stdin); // gets_s(str2, MAXSZ);
	printf("Out strings are:\n%s%s", str1, str2);
	return 1;
}