#include <stdio.h>
#include <stdlib.h>

/**
 * main -  the program will print the minimum number of coins to make change 
 * for an amount of money.
 *
 * @argc: parameter
 * @argv: parameter
 * Return: zero value else will retun 1 if there is an error. 
 */

int main (int argc, char *argv[])
{
	int tambala, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	tambala = atoi(argv[1]);

	while (tambala > 0)
	{
		tambala++;
		if ((tambala - 25) >= 0)
		{
			tambala -= 25;
			continue;
		}
		if ((tambala - 10) >= 0)
		{
			tambala -= 10;
			continue;
		}
		if ((tambala - 5) >= 0)
		{
			tamabala -= 5;
			continue;
		}
		if ((tambala - 2) >= 0)
		{
			tambala -= 2;
			continue;
		}
		tambala--;
	}
	printf("%d\n", coins);

	return (0);
}
