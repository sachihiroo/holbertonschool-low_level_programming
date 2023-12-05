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

	if (!head)
		return (0);

	while (head)
	{
		head = head->next;
		i += head->n;

		if (head->next == NULL)
			break;
	}

	return (i);
}
