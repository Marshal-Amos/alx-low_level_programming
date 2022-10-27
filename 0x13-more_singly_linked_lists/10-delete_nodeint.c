#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index
 * index of a listint_t linked list
 *
 * @head: pointer to the first node of the list
 * @index: index of the nodde that should be deleted
 *
 * Return:1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporary, *current, *hold;
	unsigned int i;

	i = 0;
	if (*head == NULL)
	{
		return (-1);
	}
	if (index > 0)
	{
		current = *head;
		while (i < index - 1)
		{
			current = current->next;
			if (current == NULL)
			{
				return (-1);
			}
			i++;
		}
		hold = current->next;
		if (hold == NULL)
		{
			return (-1);
		}
		temporary = hold->next;
		free(hold);
		current->next = temporary;
	}
	else
	{
		temporary = (*head)->next;
		free(*head);
		*head = temporary;
	}
	return (1);
}
