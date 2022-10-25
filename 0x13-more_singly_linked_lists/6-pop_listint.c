#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a
 * listint_t linked list
 *
 * @head: pointer to the first node of the linked list
 *
 * Return:  the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	temporary = (*head)->next;
	free(*head);
	*head = temporary;

	return (data);
}
