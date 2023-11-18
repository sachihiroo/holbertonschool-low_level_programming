#include "3-calc.h"
/**
 * op_add - check the code
 * @a: int
 * @b: int
 * Return: a + b
 */
int op_add(int a, int b)
{
	int add;

	add = a + b;
	return (add);
}
/**
 * op_sub - check the code.
 * @a: int
 * @b: int
 * Return: a - b
 */
int op_sub(int a, int b)
{
	int sub;

	sub = a - b;
	return (sub);
}
/**
 * op_mul - check the code.
 * @a: int
 * @b: int
 * Return: a * b
 */
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}
/**
 * op_div - check the code.
 * @a: int
 * @b: int
 * Return: a / b
 */
int op_div(int a, int b)
{
	int div;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	div = a / b;
	return (div);
}
/**
 * op_mod - check the code.
 * @a: int
 * @b: int
 * Return: a % b
 */
int op_mod(int a, int b)
{
	int mod;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	mod = a % b;
	return (mod);
}
