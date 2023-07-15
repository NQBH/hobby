#include <stdio.h>
#include <time.h>
#define num_row 5 // const int num_row = 5;
#define num_col 7 // const int num_col = 7;
#define max_row 20 // const int max_row = 5;
#define max_col 20 // const int max_col = 7;

int main() {
	int a[num_row][num_col], i, j;
	srand((unsigned)time(NULL));
	for (i = 0; i < num_row; ++i)
		for (j = 0; j < num_col; ++j)
			a[i][j] = rand() % 100;
	int b[max_row][max_col], mRow, nCol;
	printf("mRow = ");
	scanf("%d", &mRow);
	printf("nCol = ");
	scanf("%d", &nCol);
	if (mRow < 1 || mRow > max_row || nCol < 1 || nCol > max_col) {
		printf("Invalid size!\n");
		return;
	}
	for (i = 0; i < mRow; ++i)
		for (j = 0; j < nCol; ++j)
			scanf("%d", &a[i][j]);
}