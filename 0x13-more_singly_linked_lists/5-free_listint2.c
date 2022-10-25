#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *temporary, *current;

	current =  *head;

	while (current != NULL)
	{
		temporary = current->next;
		free(current);
		current = temporary;
	}
	*head = NULL;
}
