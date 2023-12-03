#include "lists.h"
/**
 * free_list -  a function that frees a list.
 * @head: pointer
 */
void free_list(list_t *head)
{
	list_t *clear;
	
	while (head != NULL)
	{
		clear = head;
		head = head->next;
		free(clear->str);
		free(clear);
	}
}
