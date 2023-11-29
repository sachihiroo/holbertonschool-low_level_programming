#include "lists.h"
/**
 * *add_node - a function that adds a new node at the beginning of a list.
 * @str: const char
 * @head:
 * Return: 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *second_node = malloc(sizeof(list_t));

	if (n == NULL)
	{
		return (NULL);
	}

	second_node->str = strdup(str);
	second_node->len = strlen(second_node->str);
	second_node->next = *head;
	*head = second_node;
	return (second_node);
}
