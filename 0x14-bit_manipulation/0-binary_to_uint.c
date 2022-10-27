#include "main.h"


/**
 * binary_to_uint - convert binary number to
 * an unsigned int value.
 * @b: binary pointer
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint (const char *b)
{
	unsigned int unnum;
	int num, base2;

	if (!b)
		return (0);

	unnum = 0;

	for (num = 0; b[num] != '\0'; num++)
		;

	for (num--, base2 = 1; num >= 0; num--, base2 *= 2)
	{
		if (b[num] != '0' && b[num] != '1')
		{
			return (0);
		}
		
		if (b[num] & 1)
		{
			unnum += base2;
		}
	}

	return (unnum);
}
