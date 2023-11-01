#include "main.h"
#include <math.h>
/**
 * _pow_recursion - chech the code.
 * @y: int
 * @x: int
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (_pow_recursion(x, y));
}
