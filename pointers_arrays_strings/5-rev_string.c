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
	char str[1000], *x, *j, k;

	n = strlen(s);
	j = n - 1;
	x = s;
	j = s;
	
	for (i =0; i < n; i++)
	{
		x++;
	}
	for (i = 0; i < n / 2; i++)
	{
		k = *j;
		*j = *x;
		*x = k;
		_putchar(s[j - i]);
	}
	_putchar('\n');
}
