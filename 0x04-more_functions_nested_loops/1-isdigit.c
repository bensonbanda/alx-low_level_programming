#include "main.h"

/**
 * _isdigit - check character is its a digit or not.
 * @c: interger
 * Return: interger value
 */

int _isdigit(int c)
{
	if (c >= 0  && c <= 9)
		return (1);

	else if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);

}
