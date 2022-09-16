#include "main.h"

/**
 * print_line -  the function will display lines
 * @void: no parameters
 * Return: no value returned
 */

void print_line(void)
{
	int number;

	if (n > 0)
	{

		for (number = 0; number < n; number++)
			_putchar('_');
	}
	_putchar('\n');

}
