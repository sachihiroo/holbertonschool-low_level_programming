#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strncat - check the code
 * @src: pointer
 * @dest: pointer
 * @n: int
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	 int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
		dest[i] = '\0';
	}
	return (dest);
}
