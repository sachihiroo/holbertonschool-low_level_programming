#include "function_pointers.h"
/**
 * array_iterator - a function that prints a name.
 * @array: int
 * @size: size_t
 * @action: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	if (action != NULL && array != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
