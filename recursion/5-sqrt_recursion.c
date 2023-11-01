#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - chech the code.
 * @n: int
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	int i;

	n = i * i;
	if ( i * i != n)
	{
		return (-1);
	}
	return (n * _sqrt_recursion(n, i * i));
}
