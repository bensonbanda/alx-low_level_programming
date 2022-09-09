#include <stdio.h>
#include <stdlib.h>                                                                                                                    
#include <time.h>
/* more headers goes there */ 
/* betty style doc for function main goes there */ 
/**
 * main - entrly point
 * @void: no parameter
 * Description: print end od the line to the screen.
 * Return: zero value.
 */
int main(void){

	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int ldigit;
	ldigit = n % 10;

	switch(n)
	{
	case(n > 5):
		printf("The last digit of %d is %d and is greater than 5", n,ldigit);
		break;
	case(n == 0):
		printf("The last digit of %d is %d and is 0", n,ldigit);
		break;
	case(n < && n != 0):
		printf("The last digit of %d is %d and is 0", n,ldigit);
		break;
	}
	return (0);
}
