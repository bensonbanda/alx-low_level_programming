#include "main.h"

/**
 * print_diagsums - this function will print the 
 * sum of two diagonal numbers.
 * @a: parameter
 * @size: parameter
 * Return: no value
 */

void print_diagsums(int *a, int size)
{
	int num, sum = 0, sum2 = 0;

	for (num = 0; num < size; num++)
	{
		sum += a[num];
		a += size;
	}

	a -= size;

	for (num = 0; num < size; num++)
	{
		sum2 += a[num];

		a -= size;
	}

	printf("%d, %d\n", sum, sum2);
}
