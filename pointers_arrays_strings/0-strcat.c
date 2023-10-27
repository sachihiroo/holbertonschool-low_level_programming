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
	int a, b;

	a = 0;
	while (dest[a])
		a++;
	for (b = 0; src[b] ; b++)
		dest[a++] = src[b];
			return (dest);
}
