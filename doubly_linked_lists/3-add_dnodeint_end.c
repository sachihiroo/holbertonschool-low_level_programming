#include "lists.h"
/**
 * *add_dnodeint_end - a function that adds a new node at the beginning of a list.
 * @n: const int
 * @head: pointer
 * Return: node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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

		dlistint_t *third_node = *head;

		while (third_node->next != NULL)
		
			third_node = third_node->next;

		third_node->next = second_node;
	}

	return (second_node);
}
