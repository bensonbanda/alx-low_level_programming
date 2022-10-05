#include <stdio.h>

/**
 * main - function will print all the arguments passed to it
 *
 * @argc: parameter
 * @argv: array parameter
 * Return: zero value
 */


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);

}
