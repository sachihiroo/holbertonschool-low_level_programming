#include "variadic_functions.h"

/**
 * om_char - check the code
 * @args: pointer
 */
void om_char(va_list *args)
{
	printf("%c", va_arg(*args, int));
}
/**
 * om_int - check the code
 * @args: pointer
 */
void om_int(va_list *args)
{
	printf("%d", va_arg(*args, int));
}
/**
 * om_float - check the code
 * @args: pointer
 */
void om_float(va_list *args)
{
	printf("%f", va_arg(*args, double));
}
/**
 * om_string - check the code
 * @args: pointer
 */
void om_string(va_list *args)
{
	char *op = va_arg(*args, char *);

	printf("%s", (op == NULL) ? "(nil)" : op);
}

/**
 * print_all - Check the code.
 * @format: const char pointer
 * Return: void
 */
void print_all(const char *const format, ...)
{
	int i, j;

	va_list args;
	om_t L[] = {
		{'c', om_char},
		{'i', om_int},
		{'f', om_float},
		{'s', om_string},
		{'\0', NULL},
	};
	const char *seperator = "";
	va_start(args, format);
	if (format == NULL)
	{
		printf("\n");
		return;
	}
	i = 0;
	while (format[i])
	{
		j = 0;
		while (L[j].op)
		{
			if (L[j].op == format[i])
			{
				printf("%s", seperator);
				L[j].take(&args);
				seperator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
