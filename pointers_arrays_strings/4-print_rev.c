#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - check the code
 * @s: pointer
 * Return: Always 0.
 */
void print_rev(char *s)
{

	for (; *s -!= '\0'; s++)
	{
		_putchar(s + 0);
	}
	_putchar('\n');
}
