#include "main.h"

/**
 * set_bit - sets a value of a bit to 1 at 
 * a given index.
 * @n: unsigned long int pointer.
 * @index: index of a bit.
 *
 *
 * Return: 1 or -1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
		return (-1);

	num = 1 << index;
	*n = (*n | num);


	return (1);


}
