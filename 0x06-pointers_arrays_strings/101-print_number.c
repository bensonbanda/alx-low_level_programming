#include "main.h"

/**
 * print_number - the function prints a number
 * @n: parameter
 * Return: no value
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');

		num = -num;
	}

	if ((num / 10) > 10)
		print_number(num / 10);
	
	_putchar((num % 10) + '0');

}
