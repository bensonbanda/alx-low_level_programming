#include "main.h"

/**
 * more_numbers - will print numbers ranging from 0 to 14
 * @void: no parameters
 * Return: no value
 */

void more_numbers(void)
{
	int number, number2;

	for (number = 0; number <= 9; number++)
	{
		for (number2 = 0; number2 <= 14; number2++)
		{
			if (number2 > 9)
				_putchar((number2 / 10) + '0');
			_putchar((number2 % 10) + '0');
		}

		_putchar('\n');
	}
}

