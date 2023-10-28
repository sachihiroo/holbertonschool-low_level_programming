#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - check the code
 * @s1: pointer
 * @s2: pointer
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, x = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && x == 0)
	{
		x = s1[i] - s2[i];
		i++;
	}
	return (x);
}
