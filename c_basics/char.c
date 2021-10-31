#include <stdio.h>

int main()
{
	printf("Enter a caracter: ");
	char ASCII;
	scanf("%c", &ASCII);

	printf("%i\n", ASCII);

	printf("Enter an integer between 0 - 127: ");
	int integer;
	scanf("%i", &integer);

	printf("%c\n", integer);
	
	return 0;
}
