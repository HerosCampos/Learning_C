#include <stdio.h>

int main()
{
	/*
	Conversion Caracters
	____________________

	%f - Decimal Notation
	%e - Scientific Notation
	%g - Computer decides the best way to print
	%ls - Can be used in all cases
	*/
	printf("Enter the Scientific Notation: ");
	double num;
	scanf("%lf", &num);

	printf("%f\n%e\n%g\n", num, num, num);



	return 0;

}
