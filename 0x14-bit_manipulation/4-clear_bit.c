#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * at a given index.
 * @n: unsigned long int pointer
 * @index: index of the bit.
 *
 *
 * Return: 1 or -1;
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
		return (-1);

	num = 1 << index;

	if (*n & num)
		*n ^= num;

	return (1);
}
