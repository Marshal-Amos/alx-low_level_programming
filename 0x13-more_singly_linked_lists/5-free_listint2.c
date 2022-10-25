#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 *
 * @head: pointer to the first node of the linked list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (*head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		temporary = (*head)->next;
		free(*head);
		*head = temporary;
	}
}
