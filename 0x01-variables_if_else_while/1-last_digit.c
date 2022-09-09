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
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (n > 5)
		printf("The last digit of %d is %d and is greater than 5", n,m);  
	else if (n == 0)
		printf("The last digit of %d is %d and is 0", n,m); 
	else if (n < 6 && n !=0)
		printf("The last digit of %d is %d and is 0", n,m);
	
	return(0);
}
