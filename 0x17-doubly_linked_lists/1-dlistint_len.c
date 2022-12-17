#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a
 * linked dlistint_t list
 *
 * @h: pointer to the first element of the dlistint
 *
 * Return: the number of elements in the dlistint
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
