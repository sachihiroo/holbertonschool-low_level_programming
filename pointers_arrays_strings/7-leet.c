#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* *leet - encodes a string.
* @s: pointer
* Return: Always 0.
*/
char *leet(char *s)
{
	unsigned int i;
	char x[] = {'A', 'E', 'O', 'T', 'L'};
	int n[] = {4, 3, 0, 7, 1};

	while (*s)
	{
		for (i = 0; i < sizeof(x) / sizeof(char); i++)
		{
			if (*s == x[i] || *s == x[i] + 32)
			{
				*s = 48 + n[i];
			}
		}
		s++;
	}
	return (s);
}
