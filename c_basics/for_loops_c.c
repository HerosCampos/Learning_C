#include <stdio.h>

int main()
{
	for(int i = 0; i <= 10; i++)
	{
		printf("\n");
		for(int k = i; k >= 0; k--)
		{
			printf("%i", k);
		}
	}
	printf("\n");
}

