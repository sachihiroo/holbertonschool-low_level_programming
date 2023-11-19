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
	char *s;

	va_start(args, n);
	int p = va_arg(args, int);
	for (i = 0; i < n; i++)
	{
		printf("%d", p);
		if ((separator != NULL) & (i < n - 1))
		{
			printf("%s", separator);
		}
	s = va_arg(args, char *);
	if (s == NULL)
	{
		printf("(nil)");
		printf("\n");
		return;
		va_end(args);
		printf("\n");
	}
	}
}
