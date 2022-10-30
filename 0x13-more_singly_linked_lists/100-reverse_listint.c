#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 *
 * @head: pointer to the first node of the linked list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *new, *reversed;

	if (*head == NULL)
		return (NULL);

	reversed = NULL;

	while (*head != NULL)
	{
		new = (*head)->next;
		(*head)->next = reversed;
		reversed = *head;
		*head = new;
	}
	*head = reversed;
	return (*head);
}
