#include <stdio.h>

int main()
{
	int pizzasToEat = 10;
	int newOutput = pizzasToEat--; // Or I could use pizzasToEat -= 1

	printf("Pizzas to eat: %i\n", pizzasToEat);
	printf("New total: %i\n", newOutput);
	return 0;
}
