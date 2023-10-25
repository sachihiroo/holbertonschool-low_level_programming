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
	int i = 0, j = 0, n;
	char s[1000], x;

	n = strlen(s);
	j = n - 1;

	while (i < j)
	{
		x = s[j];
		s[j] = s[i];
		s[i] = x;
		i++;
		j--;
		_putchar(s[j - i]);
	}
	_putchar('\n');
}
