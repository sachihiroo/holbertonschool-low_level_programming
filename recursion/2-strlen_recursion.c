#include "main.h"
/**
 *_strlen_recursion - chech the code.
 *@s: pointer
 *Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	return (_strlen_recursion(s + 1));
}
