#include "main.h"

/**
 *print_last_digit - will print last digit in a number
 *@d: interger parameter
 *Return: interger value
 */

int print_last_digit(int d)
{
	d %= 10;

	int lastdigit = printf("%d%d", d,d);

	return (lastdigit);
}
