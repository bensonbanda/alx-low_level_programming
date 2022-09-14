#include "main.h"

/**
 * print_alphabet_x10 - will display alphabet tten times
 * @void: no parameters
 * Return: No value
 */

void print_alphabet_x10(void)
{
	int number = 0;
	int number2;

	while (number++ <= 9)
	{
		for (number2 = 97; number2 <= 122; number2++)
			putchar(number2);
		putchar('\n');
	}

}
