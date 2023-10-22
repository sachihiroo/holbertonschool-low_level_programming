#include "main.h"
#include <stdio.h>
/**
 * more_numbers - Entry Point
 * Return: void
 */
void more_numbers(void)
{
	int i, k;

	for (k = 0; k < 10; k++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i / 10 > 0)
				putchar(i / 10 + '0');
			putchar(i % 10 + '0');
		}
		putchar('\n');
	}
}
