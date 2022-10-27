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
	unsigned int uinum = 0;
	int num;

	if (!b)
		return (0);

	for (num = 0; b[num]; num++)
	{

		if (b[num] < '0' || b[num] > '1')
			return (0);
		uinum = 2 * uinum + (b[num] - '0');
	}
	return (uinum);

}
