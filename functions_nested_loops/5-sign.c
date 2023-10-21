#include "main.h"
/**
* print_sign - check the code
*description: a function that prints the sign of a number.
* @n : int
*
* Return: 1 ,  0 , -1
**/
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('+');
		return (1);
	}

}
