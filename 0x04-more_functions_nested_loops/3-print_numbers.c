#include "main.h"

/**
 * print_numbers - will display numbers from zero to nine
 * @void: no parameters
 * Return: Nothing
 */

void print_numbers(void)
{
	int digit = 0;

	while (digit <= 9)
		_putchar(digit);

	_putchar('\n');
}
