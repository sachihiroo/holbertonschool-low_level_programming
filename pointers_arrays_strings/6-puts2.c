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
	int i;

	for(i =0; i < strlen(str); i += 2)
	{
		_putchar(str[i]);
		s[i / 2] = str[i];
	}
	_putchar('\n');
}
