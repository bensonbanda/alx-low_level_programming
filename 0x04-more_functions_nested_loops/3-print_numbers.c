#include "main.h"

/**
 * print_numbers - will display numbers from zero to nine
 * @void: no parameters
 * Return: zero value
 */

void print_numbers(void)
{
	int digit2;

	for (digit2 = 0; digit2 <= 9; digit2++)
		_putchar((digit2 % 10) + '0');

	_putchar('\n');
}
