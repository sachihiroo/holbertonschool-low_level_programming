#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - check the code
 * @src: pointer
 * @dest: pointer
 * @n: int
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int j,i;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s1[j] == s2[j] && j < i)
	{
		j++;
	}
	return(s1[j] - s2[j];
}
