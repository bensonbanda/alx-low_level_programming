#include "main.h"

/*
 *_abs - display absolute values
 *@v: interger parameter
 *Return: interger value
 */

int _abs(int v)
{
	if (v < 0)
	{
		v *= -1;

		_putchar(v);
	}

	else
		_putchar(v);
	
	return (0);
}
