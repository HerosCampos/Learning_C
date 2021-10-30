#include <stdio.h>

int main()
{
	printf("Enter your name: ");
	char name[31];
	scanf("%s", name);

	printf("Hello %s!\nYou look nice today!\n", name);

	return 0;
}
