#include <stdio.h>

int main()
{
	printf("Please enter a radius: ");
	int radius;
	scanf("%i", &radius);


	float area;
	area = 3.14159 * (radius * radius);

	printf("The area is: %f\n", area);

	return 0;
}
