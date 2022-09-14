#include "main.h"

/**
 *_islower - will return 1 or 0
 *@c: interger parameter
 *Return: int
 */

int _islower(int c)
{
	if (c >= 65 && c <= 90)
		return (0);
	else if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

