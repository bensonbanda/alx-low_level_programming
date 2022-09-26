#include "main.h"

/**
 * _strchr - this function will return the pointer of the string 
 * character in the memory address.
 * @s: parameter
 * @c: parameter
 * Return: pointer value
 */

char *_strchr(char *s, char c)
{
	int num;

	for (num = 0; (s[num] != c) && (s[num] != '\0'); num++)
		;
	if (s[num] == c)
		return (s + num);
	else
		return (NULL);
}
