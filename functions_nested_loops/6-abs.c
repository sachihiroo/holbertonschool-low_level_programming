#include "main.h"
/**
 *_abs - check the code
 *description: a function that computes the absolute value of an integer.
 *@i : int
 *Return: 0
 */
int _abs(int i)
{
	if (i <= 0)
		return (i * -1);
	if (i > 0)
		return (i);
	return (0);
}
