#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * Main - Entrly point
 * @void: no parameters
 * Description: THe function will print negative and postive intergers.
 * Return: zero value will be returned.
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is postive\n", n);
}

