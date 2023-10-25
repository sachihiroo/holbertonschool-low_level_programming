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
	int i, n, x;
	char str[1000], w;

	n = strlen(s);
	x = n - 1;

	for (i = 0; i < n; i++)
	{
		w = str[i];
		str[i] = str[x];
		str[x] = w;
		x--;
		_putchar(s[n - 1 - i]);
	}
	_putchar('\n');
}
