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
char *_strncat(char *dest, char *src, int n)
{
	int j, i;

	j = 0;
	while (dest[j])
		j++;
	for (i = 0; i < n && src[i] != '\0' ; i++)
		dest[j + i] = src[i];
	dest[j + i] = '\0';
			return (dest);
}
