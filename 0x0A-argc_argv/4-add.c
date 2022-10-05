#include <stdio.h>
#include <stdlib.h>

/**
 * main - the function will only perfom addtion to postive 
 * numbers.
 * @argc: parameter
 * @argv: parameter
 *
 * Return: zaero or one on failure
 */

int main (int argc, char *argv[])
{
	int i, n, answer = 0;

	for (i = 1; i < argc; i++)
	{
		for (n = 0; argv[i][n] != '\0'; n++)
		{
			if (argv[i][n] < '0' || argv[i][n] > '9')
			{
				printf("Error\n");
				return (0);
			}
		}
		answer += atoi(argv[i]);
	}

	printf("%d\n", answer);
	return (0);
}
