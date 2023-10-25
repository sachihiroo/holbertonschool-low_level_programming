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
	int i, l = 0;
	char str[1000];

	l = strlen(s);
	while(i < l)
	{
		str[i] = *(s + l - i - 1);
		i++;
	}
	i = 0;
	while(i < l)
	{
		*(s + i) = str[i];
		i++;
	}
}

