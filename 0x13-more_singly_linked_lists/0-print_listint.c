#include "lists.h"

/**
 * print_listint -  a function that prints all the elements of a listint_t list
 *
 * @h: the linked list to be provided
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
