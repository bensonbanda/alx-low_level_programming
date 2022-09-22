#include "main.h"

/**
 * leet - the function will encode string to numbers
 * @str: character parameter
 * Return: character value
 */


char *leet(char *)
{
	int num = 0, num2;
	char leet[8] = {'b', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[++num])
	{
		for (num2 = 0; num2 <= 7; num2++)
		{
			if (str[num] == leet[num2] ||
					str[num] - 32 == leet[num2])
				str[num] = num2 + '0';
		}
	}

	return (str);
}
