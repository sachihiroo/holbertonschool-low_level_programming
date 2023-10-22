#include "main.h"
#include <stdio.h>
/**
 * print_number - Entry Point
 * @n: integer to be printed
 * Return: 0 (Success)
 */
void print_number(int n)
{
	unsigned int num, div = 10;

	if (n < 0)
	{
		num = -n;
		putchar('-');
	}
	else
		num = n;

	if (num / 10 > 0)
	{
		print_number(num / 10);
	putchar(num % 10 + '0');
	}
	putchar('\n');
}
