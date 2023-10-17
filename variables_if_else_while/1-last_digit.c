#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main -Entry point
*
*This program will assign a random number to 
*the variable n each time it is executed
*
* Return: Always (Success)
*/
int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if ( x > 5 )
		printf("Last digit is %d \n", n, x,);
	if ( x == 0 )
		printf("LAst digit is %d \n", n, x,);
	if ( x < 6 )
		printf("Last digit is %d \n", n, x,);
	return (0);
}
