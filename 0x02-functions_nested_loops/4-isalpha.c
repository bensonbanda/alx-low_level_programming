#include "main.h"
/**
 *_isalpha - return 1 or 0
 *@c: interger parameter
 *Return: interger value.
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	else if (c >= 97 && c <= 122)
		return (1);

	else
		return (0);
}
