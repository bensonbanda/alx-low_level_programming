#include "main.h"

/**
 * rot13 - encodes a string using a rot13 logic
 * @str: parameter
 * Return: encoded string
 */

char *rot13(char *str)
{
	int num, num2;

	char alpha[52] = {'A', 'B', 'C', 'D', 'E', 'F', 
		'G', 'H', 'I', 'J', 'K','L',
		'M', 'N', 'O', 'P', 'Q', 'R', 
		'S', 'T', 'U', 'V', 'W', 'X',
		'Y','Z'};
	
	char rot13key[52] = {'N', 'O', 'P', 'Q','R', 'S',
		'U', 'V', 'W', 'X', 'Y', 'Z',
		'A', 'B', 'C', 'D', 'E', 'F',
		'G', 'H', 'I', 'J', 'K', 'L',
		'M', 'n', 'o', 'p', 'q', 'r',
		'r', 's', 't', 'u', 'v', 'w',
		'x', 'y', 'z', 'a', 'b', 'c',
		'd', 'e', 'f', 'g', 'h', 'i',
		'j', 'k', 'l', 'm'};

	while (str[++num])
	{
		for (num2 = 0; num2 < 52; num2++)
		{
			if (str[num] == alpha[num2])
			{
				str[num] = rot13key[num2];
				break;
			}
		}
	}
	return (str);

}
