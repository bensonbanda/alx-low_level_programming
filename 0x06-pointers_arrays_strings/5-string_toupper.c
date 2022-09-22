#include "main.h"

/**
 *string_toupper - will change small letter to uppercase letters
 *@st: character parameter
 *Return: character value
 */

char *string_toupper(char *st)
{
	int nm = 0;
	
	while (st[nm++])
	{
		f (st[nm] >= 'a' && st[nm] <= 'z')
			st[nm] -= 32;
	}

	return (st);
}
