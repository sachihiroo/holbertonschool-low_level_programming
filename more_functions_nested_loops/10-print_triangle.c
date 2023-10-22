#include "main.h"
#include <stdio.h>
/**
 * print_triangle - Entry Point
 * @n: print triangle of n side length
 * Return: void
 */
void print_triangle(int n)
{
	int i, j;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = n; j > i + 1; j--)
			putchar(' ');
		for (j = 0; j < i + 1; j++)
			putchar('#');
		putchar('\n');
	}
}
