#include "main.h"

/**
 * print_most_numbers - the code will print numbers except two and four
 * @void: no parameters
 * Return: No value
 */


void print_most_numbers(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		if (digit == 2 || digit == 4)
			continue;
		
		_putchar(digit);
		
		digit++;
	}
	
}
