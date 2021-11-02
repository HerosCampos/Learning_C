#include <stdio.h>


int main()
{
	printf("Welcome to the doctor's office\n");

	printf("1. Add patient\n2. View a patient\n3. Search patients\n4. exit\nYour option: ");
	int opt;
	scanf("%i", &opt);

	printf("You choose the option: %i\n", opt);

	if(opt == 1)
	{
		printf("Adding a patient\n");
	}
	else if(opt == 2)
	{
		printf("Viewing a patient\n");
	}
	else if(opt == 3)
	{
		printf("Searching pantients\n");
	}
	else
	{
		printf("Exiting\n");
	}
}
