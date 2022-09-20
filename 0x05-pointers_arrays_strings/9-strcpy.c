#include "main.h"


/**
 * _strcpy - the function will copy string 
 *@dest: parameter
 *@src: parameter
 *Return: character value
 */

char *_strcpy(char *dest, char *src)
{
	int num = 0;

	while ((*src + num) != '\0')
	{
		*(dest + num) = *(src + num);
		num++;
	}
	*(dest + num) = '\0';

	return (dest);
}
