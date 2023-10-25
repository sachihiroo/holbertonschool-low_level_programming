#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - check the code
 * @str: pointer
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	*a = n;
	for (int i =0; i < n; i++);
	{
		if (i < n - 1)
			printf("%d, ", *(a + i));
	}
}
