#include "main.h"

/**
 * binary_to_uint - the functin coverts binary number to 
 * unsigned interger value.
 * @b: binary pointer
 *
 * Return: unsigned int
 */

unsigned int bindary_to_uint (const char *b)
{
	unsigned int uinum;
	int num, base_two;

	if (!b)
		return (0);

	uinum = 0;

	for (num = 0; b[num] != '\0'; num++)
		;

	for (num--, base_two = 1; num >= 0; num >= 0; num--, base_two *= 2)
	{
		if (b[num] != '0' && b[num] != '1')
			return (0);

		if (b[num] & 1)
			uinum += base_two;
	}

	return (uinum);


}
