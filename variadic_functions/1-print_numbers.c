#include "variadic_functions.h"
/**
 * sum_them_all - Check the code.
 * @n: const unsigned int
 *
 * Return: 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;

    va_start (args, n);

    for (i = 0; i < n; i++)
    {
        printf("%d", va_arg(args,int))
        if (separator != NULL & i < n - 1)
        {
                printf("%s\n", separator);
        }
    }
    va_end(args);
}
