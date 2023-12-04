#include "lists.h"
/**
 * print_dlistint - a function that prints all the elements of a list.
 * @h: pointer
 *
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->next != NULL)
			printf("%d\n", h->n);
		i += 1;
		h = h->next;
	}
	return (i);
}
