#include "main.h"
/**
 * *malloc_checked - check the code
 * @b: int
 * Return: pointer or NULL.
 */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
