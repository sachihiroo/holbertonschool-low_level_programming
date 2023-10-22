#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - Entry Point
 * @n: number of times print '_'
 * Return: 0 (Success)
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			putchar(' ');
		putchar('\\');
		putchar('\n');
	}
}
