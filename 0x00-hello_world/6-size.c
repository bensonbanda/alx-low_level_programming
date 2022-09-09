#include <stdio.h>


/**
 * main - entrly point
 * @void: will print out sizes of c data types.
 * Description: show data types sizes.
 * Return: no value.
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long long:%lu byte(s)\n", (unsigned long)sizeof(long long));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
