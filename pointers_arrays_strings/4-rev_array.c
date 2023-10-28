#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* reverse_array - check the code.
* @a: pointer
* @n: int
* Return: Always 0.
*/
void reverse_array(int *a, int n)
{
	int i, res;

	res = 0;
	i = 0;
	for (i = 0; i < n / 2 ; i++)
	{
	res = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = res;
	}
}
