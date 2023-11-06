#include "main.h"
/**
 * *create_array - a function that creates an array of chars
 * @c: char
 * @size: size of array
 * Return: NULLL or array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);
	if (p == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			p[i] = c;
	}
	return (p);
}
