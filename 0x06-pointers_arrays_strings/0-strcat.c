#include "main.h"

/**
 *_strcat - will join two strings
 *@dest: character parameter
 *@src: character parameter
 *Return: character value
 */

char *_strcat(char *dest, char *src)
{
	int num = 0, num2 = 0;

	while (dest[num++])
		num2++;

	for (num = 0; src[num]; num++)
		dest[num2++] = src[num];

	return (dest);
}
