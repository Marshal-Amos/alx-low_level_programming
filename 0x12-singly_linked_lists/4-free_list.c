#include "lists.h"

/**
 * free_list - a a function that frees a list_t list
 *
 * @head: the given list to be freed
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temporary;

	while (head != NULL)
	{
		temporary = head->next;
		free(head->str);
		free(head);
		head = temporary;
	}
}
