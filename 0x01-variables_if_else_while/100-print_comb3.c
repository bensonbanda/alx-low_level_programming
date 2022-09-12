#include <stdio.h>
/**
 * main - entrly point
 * @void: no parameters
 * Description: the function will display combination of numbers
 * Return: Zero Value
 */

int main(void)
{
	int number1, number2;

	for (number1 = 0; number1 < 9; number1++)
	{
		for (number2 = number1 + 1; number2 < 10; number2++)
		{
			putchar((number1 % 10) + '0');
			putchar((number1 % 10) + '0');

			if (number1 == 8 && number2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
