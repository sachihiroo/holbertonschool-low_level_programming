#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - check the code
 * @str: pointer
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, x;

	x = strlen(str);
	if(x % 2)
	{
		for (i = x / 2; i < x; i ++)
		{
			_putchar(str[i]);
		}
	else
		for(((x - 1) / 2) + 1; i < x; i++)
		{
			_putchar(str[i]);
		}
	_putchar('\n');
	}
}
