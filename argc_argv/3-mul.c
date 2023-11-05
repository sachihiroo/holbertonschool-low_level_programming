#include "main.h"
#include <stdlib.h>
/**
 *main - print mul
 *@argc: int
 *@argv: pointer to an array
 *Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
			printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
