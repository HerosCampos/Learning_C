#include <stdio.h>

int main()
{
	printf("The number of eggs for the day: ");
	int eggs;
	scanf("%i", &eggs);

	double dozen = (double)eggs / 12;

	printf("You have %0.2f dozen eggs.\n", dozen);	
	



	return 0;
}
