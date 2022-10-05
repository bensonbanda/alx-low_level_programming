#include <stdio.h>

/**
 * main - the function will print the number of arguments
 *
 *@argc: number of arguments
 *
 *@argv: the array of arguments parameter
 *
 *Return: zero value
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
