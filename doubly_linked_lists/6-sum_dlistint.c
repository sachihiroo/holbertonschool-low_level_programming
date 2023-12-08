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
	dlistint_t *p;

	p = head;
	if (!p)
		return (0);
	if (p->next == NULL)
	{
		i = p->n;
	}
	while (p->next)
	{
		p = p->next;
		i += p->n;
	}

	return (i);
}
