#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - chech the code.
 * @n: int
 * @i: int
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
int sqr(int n, int i)
{
	return (sqr(n, 1));
}
/**
 * sqr - check the code.
 * @n: int
 * @i: int
 * Return: Always 0.
 */
int sqr(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (sqr(n, i +1));
	}
	else
	{
		return (-1);
	}
}
