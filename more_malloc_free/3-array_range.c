#include "main.h"
/**
 * *array_range -  function that creates an array of integers.
 * @min: int
 * @max: int
 * Return: pointer or NULL
 */
int *array_range(int min, int max)
{
	int i, *array;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (max - min); i++)
	{
		array[i] = min + i;
	}
	return (array);
}
