#include "main.h"


/**
 * strspn - this function will return a value of a substring
 * @s: parameter
 * @accept: parameter
 * Return: interger value
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int numb = 0;
	int num;

	while (*s)
	{
		for (num = 0; accept[num]; num++)
		{
			if (accept[num] == *s)
			{
				numb++;
				break;
			}
			else if ((accept[num + 1]) == '\0')
				return (numb);
		}
		s++;
	}

	return (numb);
}
