#include "main.h"

/**
 * print_alphbet - the function will display the alphabet characters.
 * @void: no parameters
 * Return: zero value
 */

void print_alphabet(void)
{
	int number = 0;

	for (number = 97; number <= 122; number++)
		_putchar(number);
	
	_putchar('\n');

}
