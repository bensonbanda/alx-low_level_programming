#include"main.h"

/**
 * puts2 - will print half of a string
 * @str: parameter
 * Return: nothing
 */

void puts2(char *str)
{
	int num = 0;

	while (str[num] != '\0')
	{
		if (num % 2 == 0)
			_putchar(str[num]);
		num++;
	}

	_putchar('\n');

}
