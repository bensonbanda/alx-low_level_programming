#include "main.h"

/**
 * print_diagonal - will print diagonal characters
 * @n: interger parameters
 * Return: no value
 */

void print_diagonal(int n)
{
	int num1, num2;

	if (n > 0)
	{
		for (num1 = 0; num1 < n; num1++)
		{
			for (num2 = 0; num2 < num1; num2++)
				_putchar(' ');
			_putchar('\\');

			if (num1 == n -1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
