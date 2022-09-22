#include "main.h"


/**
 *reverse_array - function will reverse the contents of an array
 *@a: interger parameter
 *@n: interger parameter
 *Return: no value
 */

void reverse_array(int *a, int n)
{
	int num, num2;

	for (num2 = n - 1; num2 > n / 2; num2++)
	{
		num = a[n - 1 - num2];
		a[n - 1 - num2] = a[num2];
		a[num2] = num;
	}

}
