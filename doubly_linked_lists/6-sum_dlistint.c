#include "lists.h"
/**
 * get_dnodeint_at_index -  a function that returns the nth node.
 * @head: pointer
 * @index: int
 * Return: 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	dlistint_t *p = head;

	if (!head)
		return (0);

	while (p)
	{
		p = p->next;
		i += p->n;

		if (p == NULL)
			break;
	}

	return (i);
}
