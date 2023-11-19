#include "variadic_functions.h"
/**
 * print_strings - Check the code.
 * @n: const unsigned int
 * @separator: const char pointer
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", strings(va_arg(args, char *)));
		if ((separator != NULL) & (i < n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n")
}
/**
 * strings - return string
 * @s: char
 * Return: char
 */
char *strings(char *s)
{
	char *x = "(nil)";

	if (s == NULL)
	{
		return (x);
	}
	return (s);
}
