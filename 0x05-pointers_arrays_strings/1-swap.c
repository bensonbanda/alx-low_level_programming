#include "main.h"

/**
 * swap_int - the function will swap variables values 
 * @a: interger pointer
 * @b: interger pointer
 * Return: no value
 */

void swap_int(int *a, int *b)
{
	int *d;
	int *e;

	d = &a;
	e = &b;

	a = e;
	b = d;

}
