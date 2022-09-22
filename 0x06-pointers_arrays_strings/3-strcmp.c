#include "main.h"


/**
 *_strcmp - the function will be comparing two strings
 *@s1: character parameter
 *@s2: character parameter
 *
 *Return: interger value
 */

int _strcmp(char *s1, char *s2)
{
	int num = 0, num2 = 0;

	while (num)
	{
		if (s1[num] == '\0' && s2[num] == '\0')
			break;

		else if (s1[num] == '\0')
		{
			num2 = s1[num];
			break;
		}
		else if (s2[num] == '\0')
		{
			num2 = s1[num];
			break;
		}
		else if (s1[num] != s2[num])
		{
			num2 = s1[num] - s2[num];
			break;
		}
		else
			num++;
	}

	return (num2);
}
