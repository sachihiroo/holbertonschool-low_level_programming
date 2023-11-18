#include "3-calc.h"
/**
 * main - check the code.
 * @argv: int
 * @argc: int
 * Return:
 */
void main(int argc, char argv[])
{
	int a, b;

	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);

		if ((*get_op_func(*s))(int, int) != NULL)
		{
			printf("%d\n", (*get_op_func(*s)(a, b)));
		}
		else
		{
			printf("Error")
				exit(99);
		}
	}
	else
	{
		printf("Error");
		exit(98);
	}
}
