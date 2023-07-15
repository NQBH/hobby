#include <stdio.h>
#include <wchar.h>
#define MAXSZ 256

int main() {
	char str[MAXSZ];
	wchar_t wstr[MAXSZ];
	float x = 1.825F, y = -15.275F;
	sprintf(str, "Point (%f, %f)\n", x, y);
	swprintf(wstr, MAXSZ, L"Point (%f, %f)\n", x, y);
	// str & wstr are ready for use to output to files, printers, or graphics screen ...
}