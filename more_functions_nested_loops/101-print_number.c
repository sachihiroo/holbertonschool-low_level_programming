#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer using putchar
 *
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int u, i;

	if (n < 0)
	{
		u = -n;
		putchar('-');
	}
	else
	{
		u = n;
	}

	i = 1000000000;
	do {
		if (i <= u || i == 1)
			putchar(u / i % 10 + '0');
		i /= 10;
	} while (i != 0);
}
