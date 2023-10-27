#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcat - check the code
 * @src: pointer
 * @dest: pointer
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int n, i;

	n = strlen(src);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[n + i] = src[i];
		dest[n + i] = '\0';
		return (dest);
	}
}
