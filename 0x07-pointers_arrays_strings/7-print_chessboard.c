#include "main.h"

/**
 * print_chessboard - the function will print a chessboard
 * @a: parameter
 * Return: no value
 */


void print_chessboard(char (*a)[8])
{
	int num1, num2;

	for (num1 = 0; a[num1][7]; num1++)
	{
		for (num2 = 0; num2 < 8; num2++)
			_putchar(a[num1][num2]);
		_putchar('\n');
	}
}
