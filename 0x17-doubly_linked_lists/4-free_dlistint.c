#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list
 *
 * @head: pointer to the first node of the dlistint
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
