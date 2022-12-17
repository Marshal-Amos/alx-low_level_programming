#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data (n) of a
 * dlistint_t linked list
 *
 * @head: pointer to the firsy node of the dlistint
 *
 * Return: sum of all the data of the dlistint,
 * or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
