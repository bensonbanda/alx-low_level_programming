#include "main.h"

/**
 *print_sign - display +,- or 0
 *@n: interger parameter
 *Return: 0,1 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}

	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}

}
