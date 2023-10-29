#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* *leet - check the code.
* @s: pointer
* Return: Always 0.
*/
char *leet(char *s)
{
	int i, j, len =0;
	char x[5] = {'A', 'E', 'O', 'T', 'L'};
	int n[5] = {4, 0, 3, 7, 1};
	int i;

	len = strlen(s);
	while (*c)
	{
		for (i = 0; i < x / n; i++)
		{
			if (*s == x[i] || *s == + 32)
			{
				*s = 48 + n[i];
			}
		}
		s++;
	}
	return(s);
}


