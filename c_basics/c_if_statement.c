#include <stdio.h>
#include <stdbool.h>

int main()
{
	bool pizza;
	printf("Do you like pizza? 1 - True / 0 - False: ");
	int temp;
	scanf("%d", &temp);

	pizza = temp;

	if(pizza)
	{
		printf("Welcome to the team!");
	}
	else
	{
		printf("Goodbye!");
	}
}
