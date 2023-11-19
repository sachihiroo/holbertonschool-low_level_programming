#include "3-calc.h"
/**
 * main - check the code.
 * @argv: int
 * @argc: int
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);

		if ((*get_op_func(argv[2])) != NULL)
		{
			printf("%d\n", (*get_op_func(argv[2]))(a, b));
		}
		else
		{
			printf("Error\n");
				exit(99);
		}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
