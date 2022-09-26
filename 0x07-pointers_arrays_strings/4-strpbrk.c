#include "main.h"

/**
 * _strpbrk - the function locates the bytes thta represents 
 * the string accept in sentence.
 * @s: parameter
 * @accept: parameter
 * Return: pointer string
 */

char *_strpbrk(char *s, char *accept)
{
	int num;

	while (*s)
	{
		for (num = 0; accept[num]; num++)
		{
			if (accept[num] == *s)
				return (s);
		}

		s++;
	}

	return ('\0');
}
