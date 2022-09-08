#include <stdio.h>


/**
 * main - entrly point
 * @void: will print out sizes of c data types.
 * Description: show data types sizes.
 * Return: no value.
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n",sizeof(char));
	printf("Size of an int: %d byte(s)\n",sizeof(int));
	printf("Size of a long int: %d byte(s)\n",sizeof(long));
	printf("Size of a long long: %d byte(s)\n",sizeof(unsigned long));
	printf("Size of a float: %d byte(s)\n",sizeof(float));

	return (0);
}