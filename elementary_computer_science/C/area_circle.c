#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	// #define Pi 3.14159
	float R, area;
	scanf("%f", &R);
	if (R < 0) {
		printf("Error: R < 0.");
		exit(0);
	}
	area = M_PI*R*R;
	printf("The area of the circle whose radius R = %f is %f.\n", R, area);
}
// Terminal: gcc area_circle.c -o area_circle