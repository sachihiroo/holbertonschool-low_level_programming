#include "main.h"
/**
 *factorial - chech the code.
 *@n: int
 *Return: Always 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else
	{
		return (n * factorial(n - 1));
	}
}
