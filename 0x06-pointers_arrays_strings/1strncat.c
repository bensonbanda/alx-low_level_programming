#include "main.h"

/**
 *_strcat - wil join two or more words
 *@dest: parameter
 *@src: parameter
 *@n: parameter
 *Return: character value
 */

char *_strncat(char *dest, char *src, int n)
{
	int num = 0, num2 = 0;

	while (dest[num++])
		num2++;

	for (num = 0; src[num] && num < n; num++)
		dest[num2++] = src[num];

	return (dest);


}
