#include <stdio.h>

void print_alphabet(void);


/**
 * Main - entrly point
 * @void: no parameters
 * Description: the function will display the results from the other fun
 * Return: zero value
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print alphabet 
 * @void: no parameters
 * Description: the function will display alphabet characters
 * Return: zero value
 */
void print_alphabet(void)
{
	int number = 0;

	for (number = 97; number <= 122; number++)
	{
		putchar(number);
	}

}
