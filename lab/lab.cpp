#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	float x, y, z;
	float a, b;
	printf(" x, y, z = ");
	scanf("%f %f %f", &x, &y, &z);
	a = ((sqrt(fabs(x - 1.0)) + cbrt(pow(y, 2) + 1.0)) / (1 + pow(x, 2) / 2.0 + pow(y, 2) / 4.0)) * sin(x) + log(1 + pow(x, 4)) - exp(2 * x - y);
	b = (x * (atan(z) - log10(4.0 / (1.0 + pow(x, 2))))) / (3.14 + pow(cos(y + pow(z, 2)), 2));
	printf("a = %f\n", a);
	printf("b = %f", b);
}