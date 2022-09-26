#include "main.h"

/**
 *_memcpy - this function will be copying memory
 *addresses
 *@dest: parameter
 *@src: parameter
 *@n: parameter
 *Return: character values
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num = 0;

	for (; num < n; num++)
		dest[num] = src[num];

	return (dest);
}
