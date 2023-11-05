#include "main.h"
#include <stdlib.h>
/**
 *main - print (+) numbers
 *@argc: int
 *@argv: pointer to an array
 *Return: 0.
 */
int main(int argc, char *argv[])
{
	int res = 0;
	char *i;

	while (--argc)
	{
		for (i = argv[argc]; *i; i++)
			if (*i < '0' || *i > '9')
				return (printf("Error\n"), 1);
		res = res + (atoi(argv[argc]));
	}
	printf("%d\n", res);
	return (0);
}
