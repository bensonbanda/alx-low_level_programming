#include "main.h"

/**
 * print_line -  the function will display lines
 * @n: interger parameters
 * Return: no value returned
 */

void print_line(int n)
{
	int number;

	if (n > 0)
	{

		for (number = 0; number < n; number++)
			_putchar('_');
	}
	_putchar('\n');

}
