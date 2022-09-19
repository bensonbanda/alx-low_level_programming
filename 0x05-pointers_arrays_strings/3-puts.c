#include "main.h"

/**
 * _puts - will display strings
 * @str: character parameter
 * Return: no value
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
