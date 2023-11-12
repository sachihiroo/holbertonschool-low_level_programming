#include "main.h"
/**
 * *_calloc - a function that concatenates two strings.
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: pointer oor NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *p;

	(void*)calloc;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = calloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL)
	}
	return (p);
}
