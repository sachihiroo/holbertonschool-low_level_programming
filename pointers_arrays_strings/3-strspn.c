#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - check the code
 * @s : string
 * @accept : string 
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, i = 0;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != s[i]; j++)
			if (accept[j] == '\0')
				return (i);
	return (i);
}
