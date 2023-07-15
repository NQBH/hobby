#include <stdio.h>
#include <time.h>
#define num_row 5 // const int num_row = 5;
#define num_col 7 // const int num_col = 7;

int main() {
	int a[num_row][num_col], i, j;
	srand((unsigned)time(NULL));
	for (i = 0; i < num_row; ++i)
		for (j = 0; j < num_col; ++j)
			a[i][j] = rand() % 100;
}