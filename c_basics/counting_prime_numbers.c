#include <stdio.h>

int main()
{
	printf("Enter the number that you want to to check if it is prime: ");
	int prime;
	scanf("%i", &prime);

	int count = 0;
	
	for(int i = 1; i <= prime; i++)
	{
		if(prime % i == 0)
		{
			printf("%i ", i);
			++count;
		}
	}
	if(count == 2)
	{
		printf("\n%i is a prime number!", prime);
	}
	else
	{
		printf("\n%i is not a prime number!", prime);
	}

}
