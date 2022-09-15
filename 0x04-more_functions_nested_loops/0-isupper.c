#include "main.h"

/**
 * _isupper - will check uppercase characters
 * @c: interger parameter
 * Return: interger value
 */

int _isupper(int c)
{
	int number;

	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);

}

