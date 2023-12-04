#include "lists.h"
/**
 * free_dlistint -  a function that frees a list.
 * @head: pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *clear;

	while (head != NULL)
	{
		clear = head;
		head = head->next;
		free(clear);
	}
}
