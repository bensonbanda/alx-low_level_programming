#include <stdio.h>


/**
 * main - entrly point
 * @void: will print out sizes of c data types.
 * Description: show data types sizes.
 * Return: no value.
 */

int main(void)
{
	int int_size = sizeof(int);
	int char_size = sizeof(char);
	int long_size = sizeof(long);
	int long_long_size = sizeof(long long);
	int float_size = sizeof(float);

	printf("Size of a char: %d byte(s)\n", char_size);
	printf("Size of an int: %d byte(s)\n", int_size);
	printf("Size of a long int: %d byte(s)\n", long_size);
	printf("Size of a long long: %d byte(s)\n", long_long_size);
	printf("Size of a float: %d byte(s)\n", float_size);

	return (0);
}
