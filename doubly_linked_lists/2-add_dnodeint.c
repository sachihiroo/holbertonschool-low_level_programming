#include "lists.h"
/**
 * *add_dnodeint - a function that adds a new node at the beginning of a list.
 * @n: const int
 * @head: pointer
 * Return: node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *second_node = malloc(sizeof(dlistint_t));

	if (second_node == NULL || head == NULL)
	{
		free(second_node);
		return (NULL);
	}

	second_node->n = n;
	second_node->prev = NULL;

	if (*head == NULL)
	{
		*head = second_node;
		second_node->next = NULL;
	}
	else
	{
		second_node->next = *head;
		(*head)->prev = second_node;
		*head = second_node;
	}

	return (second_node);
}
