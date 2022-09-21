#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random number
 * @void: no parameter
 * Return: interger value
 */

int main(void)
{
	char b;
	
	int e;

	srand(time(0));

	while (e <= 2645)
	{
		b = rand() % 128;
		e += b;

		putchar(b);
	}

	putchar(2772 - e);
	return (0);
}
