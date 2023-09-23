#include <stdio.h>
#define PI = 3.14159

int main ()
	{
		printf("Hello User");
		printf("\n");
		float rayon, surface;
		float calcul(float r);
		printf("Rayon = ?");
		scanf ("%f", &rayon);
		surface = calcul(rayon);
		printf ("Surface = %f\n", surface);
	}
float calcul (float r) {
	float a;
	a = PI * r * r;
	return(a);
}
