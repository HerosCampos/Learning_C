#include <stdio.h>
#include <math.h>


int main()
{
	printf("Please enter the first number: ");
	double a;
	scanf("%lf", &a);

	printf("Please enter the second number: ");
	double b;
	scanf("%lf", &b);

	double hypotenuse;
	hypotenuse = sqrt((a * a) + (b * b));

	printf("The hypotenuse is %f\n", hypotenuse);

	return 0;
}
