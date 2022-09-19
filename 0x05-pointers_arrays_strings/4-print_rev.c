#include "main.h"

/**
 * print_rev - the function will display text in reverse order
 * @s: parameter
 * Return: no value
 */

void print_rev(char *s)
{
	int var1 = 0, var2 = 0;
	
	var1 = _strlen(s);

	for (var2 = var1 - 1; var2 >= 0; var2--)
		_putchar(s[var2]);

	_putchar('\n');
}

/**
 * _strlen - return the length of the string
 * @s: string parameter
 * Return: interger length
 */

int _strlen(char *s)
{
	int numb1, numb2;

	numb1 = 0;
	numb2 = 0;

	for (numb1 = 0; s[numb1] != '\0'; numb1++)
		numb2++;

	return (numb2);
}

