#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position
 *
 * @head: pointer to the first node of the linked list
 * @idx: index of the list where the new node should be inserted
 * @n: the data value of the list
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	current = *head;

	if (idx > 0)
	{
		for (i = 0; i < idx - 1; i++)
		{
			current = current->next;
			if (current == NULL)
			{
				return (NULL);
			}
		}
		new->next = current->next;
		current->next = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
