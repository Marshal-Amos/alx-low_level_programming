#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t list
 *
 * @h: the linked list to be provided
 *
 * Return: the number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	int len;

	len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
