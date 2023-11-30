#include "lists.h"
/**
 * *add_node_end - a function that adds a new node at the beginning of a list.
 * @str: const char
 * @head: pointer
 * Return: 2nd node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *second_node = malloc(sizeof(list_t));

	if (second_node == NULL)
	{
		free(second_node);
		return (NULL);
	}

	second_node->str = strdup(str);

	if (second_node->str == NULL)
	{
		free(second_node);
		return (NULL);
	}

	second_node->len = strlen(second_node->str);
	second_node->next = NULL;

	if (*head == NULL)
		*head = second_node;
	else
	{
		list_t *third_node = *head;

		while (third_node->next != NULL)
		{
			third_node = third_node->next;
		}

		third_node = second_node;
	}

	return (second_node);
}
