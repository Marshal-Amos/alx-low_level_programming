#include "lists.h"
#include <string.h>

/**
 * _strlen - a function that returns the number of a given string
 *
 * @str: the given string to be counted
 *
 * Return: the number of the counted string
 */
int _strlen(const char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}



/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 *
 * @head: the pointer to the first element of the list
 * @str: the string to be copied into the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last_node;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = _strlen(str);
	new->next = NULL;

	last_node = *head;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new;
		return (new);
	}
}
