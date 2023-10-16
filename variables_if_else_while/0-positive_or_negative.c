#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main-'This is the entry point of the codemain'.
*
*description:If the expression is true (the value of
*the expression is not 0) then the
*block is executed.
*
*Return - 0 Successful
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
{
		printf("%d is positive\n", n);
	}
		if (n < 0)
{
		printf("%d is negative\n", n);
	}
		if (n == 0)
{
		printf("%d is zero\n", n);
	}
		return (0);
}
