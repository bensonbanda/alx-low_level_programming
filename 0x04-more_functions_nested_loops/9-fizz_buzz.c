#include <stdio.h>

/**
 * main - prints numbers from 1-100
 * @void: no parameter
 * Return: interger value
 */

int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if ((number % 3) == 0 && (number % 5) == 0)
			printf("FizzBuzz");

		else if ((number % 3) == 0)
			printf("Fizz");
		
		else if ((number % 5) == 0)
			printf("%d", number);

		if (number == 100)
			continue;

		printf(" ");
	}
	printf("\n");

	return (0);
}
