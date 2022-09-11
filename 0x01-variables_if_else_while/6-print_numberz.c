#include <stdio.h>
/**
 * @void: no parameters
 * Description: will print decimal numbers from 0 -9
 * Return: zero value
 */

int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++ )
		puchar((numbers % 10 ) + '0' );

	putchar('\n');

	return (0);
}
