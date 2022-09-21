#include "main.h"


/**
 * _atoi - change string to int
 * @s: parameter
 * Return: the interger value
 */

int _atoi(char *s)
{
	int num = 1;

	unsigned int num1 = 0;

	do
	{
		if (*s == '-')
			num *= -1;
		else if (*s >= '0' && *s <= '9')
			num1 *= 10 + (*s - '0');
		else if (num1 > 0)
			break;
	}while (*s++);

	return (num1 * num);
}
