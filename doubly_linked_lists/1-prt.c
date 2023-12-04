#include "lists.h"
/**
 * dlistint_len - a function that returns all the elements of a list.
 * @h: pointer
 *
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		i += 1;
		h = h->next;
	}
	return (i);
}
