#include "lists.h"
/**
 * sum_dlistint -  a function that returns the nth node.
 * @head: pointer
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
		i += p->n;
		if (p->next->next == NULL)
		{
			p = p->next;
			i += p->n;
			break;
		}

		p = p->next;
	}

	return (i);
}
