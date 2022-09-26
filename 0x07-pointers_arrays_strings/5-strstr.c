#include "main.h"

/**
 * _strstr - the function will locate sub strings
 * of the the string based on the 
 * parameteres specified.
 * @haystack: parameter
 * @needle: parameter
 * Return: pointer of characters
 */


char *_strstr(char *haystack, char *needle)
{
	int num;

	if (*needlei == 0)
		return (haystack);

	while (*haystack)
	{
		 num = 0;

		 if (haystack[num + 1] == needle[num])
		 {
			 do {
				 if (needle[num + 1] == '\0')
					 return (haystack);
				 num++;
			 }while (haystack[num] == needle[num]);
		 }
		 haystack++;
	}

	return ('\0');

}
