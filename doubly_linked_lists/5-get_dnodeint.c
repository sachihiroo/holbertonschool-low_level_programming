#include "lists.h"
/**
 * get_dnodeint_at_index -  a function that returns the nth node.
 * @head: pointer
 * @index: int
 * Return:
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	node = head;
	if (node == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < index; i++)
	{
		node = node->next;
	}
	return (node);
}
