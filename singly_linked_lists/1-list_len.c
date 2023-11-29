#include "lists.h"
/**
 * list_len - a function that prints all the elements of a list.
 * @h: pointer
 *
 * Return: 0.
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i += 1;
		h = h->next;
	}
	return (i);
}
