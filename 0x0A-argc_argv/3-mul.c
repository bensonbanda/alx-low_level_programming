#include <stdio.h>
#include <stdlib.h>

/**
 * main - the program will display the product of two numbers
 *
 * @argc: parameter
 * @argv: parameter
 * Return: zero value
 */

int main (int argc, char *argv[])
{
	int i, n, answer;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	n = atoi(argv[2]);

	answer = i * n;

	printf("%d\n", answer);
	return (0);
}
