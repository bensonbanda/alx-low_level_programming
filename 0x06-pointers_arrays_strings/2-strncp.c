#include "main.h"

/**
 *_strncpy - function will copy the string 
 *@dest: character parameter
 *@src: character parameter
 *@n: interger parameter
 *
 *Return: character value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int num;

	for (num = 0; num < n && src[num] != '\0'; num++)
		dest[num] = src[num];

	for ( ; num < n; num++)
		dest[num] = '\0';

	return (dest);
}
