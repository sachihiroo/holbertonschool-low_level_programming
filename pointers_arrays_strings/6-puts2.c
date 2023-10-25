#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - check the code
 * @str: pointer
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i, x;

	x = strlen(str);

	for (i = 0; i < x; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
