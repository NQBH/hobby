#include <stdio.h>
#include <stdlib.h>
int main() {
	#define Pi 3.14159
	float R, area;
	scanf("%f", &R);
	if (R <= 0) {
		printf("R < 0.");
		exit(1);
	}
	area = Pi*R*R;
	printf("The area of the circle whose radius R = %f is %f.\n", R, area);
}
// Terminal: gcc area_circle.c -o area_circle