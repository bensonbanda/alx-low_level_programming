#include "main.h"

/**
 * puts_half - display half of the string
 * @str: parameter
 * Return: no value
 */

void puts_half(char *str)
{
	int num = _strlen(str);

	if (num % 2 == 0)
		num /= 2;
	else
		num = (num + 1) / 2;

	while (str[num] != '\0')
	{
		_putchar(str[num]);

		num++;
	}
	_putchar('\n');
}

/**
 * strlen - return the length of an array
 * @s: parameter
 * Return: interger value
 */

int _strlen(char *s)
{
	int num1, num2;

	num1 = 0;

	for (num1 = 0; s[num1] != '\0'; num1++)
		num2++;

	return (num2);
}


