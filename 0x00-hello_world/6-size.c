#include <stdio.h>


/**
 * main - entrly point
 * @void: will print out sizes of c data types.
 * Description: show data types sizes.
 * Return: no value.
 */

int main(void)
{
	int interger = sizeof(int);
	int chara = sizeof(char);
	printf("Size of a char: %d byte(s)\n", chara);
	printf("Size of an int: %d byte(s)\n", interger);
	printf("Size of a long int: %d byte(s)\n", sizeof(long));
	printf("Size of a long long: %d byte(s)\n", sizeof(long long));
	printf("Size of a float: %d byte(s)\n", sizeof(float));

	return (0);
}
