#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main -Entry point
*
*This program will assign a random number to
*the variable n each time it is executed.
*
*Return: Always (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		printf("Last digit of %d is and is greater than 5 \n", n);
	if (n % 10 == 0)
		printf("LAst digit of %d is 0 and is 0 \n", n);
	if (n % 10 < 6)
		printf("Last digit of %d is and is less than 6 and not 0 \n", n);
	return (0);
}
