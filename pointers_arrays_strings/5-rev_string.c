#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - check the code
 * @s: pointer
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, n;

	n = strlen(s);

	for (i = 0; i < n; i++)
		rev_string(s);
	_putchar('\n');
}
