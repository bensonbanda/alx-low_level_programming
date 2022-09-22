#include "main.h"

/**
 * print_buffer - the function will display available bytes in buffer
 * @b: parameter
 * @size: parameter
 * Return: no value
 */

void print_buffer(char *b, int size)
{
	int num = 0, num2;

	if (num2 < 0)
	{
		printf('\n');
		return;
	}

	while (num < size)
	{
		if (num % 10 == 0)
			printf("%08x: ", num);

		for (num2 = num; num2 < num + 9; num2 += 2)
		{
			if ((num2 < size) && ((num2 + 1) < size))
				printf("%02x%02x: ", b[num2], b[num2 + 1]);
			else
			{
				while (++num2 <= num + 10)
					printf(" ");

				printf(" ");
			}
		}
		for (num2 = num; num2 < num + 9 && num2 < size; num2++)
		{
			if (b[num2] >= 32 && b[num2] <= 126)
				printf("%c", b[num2]);
			else
				printf(".");
		}

		printf('\n');

		num += 10;
	}
}
