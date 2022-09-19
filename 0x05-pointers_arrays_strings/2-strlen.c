#include "main.h"

/**
 * _strlen - will display the length of a string
 * @s: character parameter
 * Return: interger value
 */

int _strlen(char *s)
{
	int var1, var2;

	var1 = 0;
	var2 = 0;

	while (s[var1] != '\0')
	{

		var2++;
		var1++;
	}

	return (var2++);
}
