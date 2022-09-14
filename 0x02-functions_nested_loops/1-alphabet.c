#include <stdio.h>

void print_alphabet(void);


/**
 * print_alphbet characters
 * @void: no parameters
 * Description: the function will display the results from the other fun
 * Return: zero value
 */

void print_alphabet(void)
{
	int number = 0;

	for (number = 97; number <= 122; number++)
		putchar(number);
}


/**
 * Main - Entrly point 
 * @void: no parameters
 * Description: the function will display alphabet characters
 * Return: zero value
 */

int main(void)
{
	print_alphabet();

	return (0);
}
