#include "main.h"

/**
 * rev_string - the function will reverse the string
 * @s: charcter pointer parameter
 * Return: no value
 */

void rev_string(char *s)
{
	int number = 10;

	while (number >= 0)
	{
		char a = *(s + number);
		
		if (a == "\0")
			continue;

		_putchar(a);
		number--;
	}
	_putchar('\n');
}
