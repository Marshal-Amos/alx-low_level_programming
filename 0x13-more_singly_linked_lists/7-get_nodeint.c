#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list
 *
 * @head: pointer to the first node of the linked list
 * @index: the index of the node to be returned.
 *
 * Return: the nth node of a listint_t linked list
 * if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (index == 0)
	{
		return (head);
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			if (head == NULL)
			{
				return (NULL);
			}

			head = head->next;
		}
	}
	return (head);
}
