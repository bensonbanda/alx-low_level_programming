#include "main.h"

/**
 * rev_string - the function will reverse the string
 * @s: charcter pointer parameter
 * Return: no value
 */

void rev_string(char *s)
{
	int len = _strlen(s);

	while (len >= 0)
	{
		char a = *(s + len);

		_putchar(a);
		
		len--;
	}
	_putchar('\n');
}

int _strlen(char *s)
{
	int num1, num2;

	for (num1 = 0; s[num1] != '\0'; num1++)
		num2++;

	return (num2);

}
