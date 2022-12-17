#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node at
 * a given position
 *
 * @h: pointer to the first node of the dlistint
 * @idx: index starting from 0
 * @n: integer value of the node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new;
	dlistint_t *hold;

	hold = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		*h = new;
		return (new);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (hold == NULL)
		{
			return (NULL);
		}
		hold = hold->next;
	}
	new->prev = hold;
	new->next = hold->next;
	hold->next->prev = new;
	hold->next = new;

	return (new);
}
