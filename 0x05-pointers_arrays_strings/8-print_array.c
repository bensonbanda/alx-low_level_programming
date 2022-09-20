#include "main.h"

/**
 * print_array - function will print array values
 * @a: parameter
 * @n: parameter
 * Return: no value
 */

void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		if (num != n - 1)
			printf("%d, ", a[num]);
		else
			printf("%d", a[num]);
	}

	printf("\n");

}
