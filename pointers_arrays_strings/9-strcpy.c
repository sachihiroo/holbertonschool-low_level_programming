#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcpy - check the code
 * @src: pointer
 * @dest: pointer
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int n, i = 0;

	n = strlen(src);
	while (i <= n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
