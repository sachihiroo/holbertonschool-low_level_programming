#include "main.h"
#include <stdio.h>
/**
 * print_line - Entry Point
 * @n: number of times print '_'
 * Return: 0 (Success)
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		putchar('_');
	putchar('\n');
}
