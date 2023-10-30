#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *print_diagsums - chech the code
 *@a: pointer
 *@size: int
 *Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i;
	long int diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += a[i * size + i];
		diag2 += a[i * size + (size - 1 - i)];
	}
	printf("%ld, %ld\n", diag1, diag2);
}
