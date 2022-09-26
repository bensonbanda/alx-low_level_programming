#include "main.h"

/**
 *_memset - the function will replace the 
 *values allocated at the range of bytes
 *specified in the parameter.
 *@s: parameter
 *@b: parameter
 *@n: parameter
 *Return: string value.
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;

		n--;
	}

	return (s);
}
