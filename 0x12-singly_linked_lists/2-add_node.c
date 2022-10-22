#include "lists.h"

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
 * _strdup - a function that duplicates a given string
 *
 * @s: the given string to be duplicated
 *
 * Return: pointer to the new address
 */
char *_strdup(const char *s)
{
	char *new, *saved;
	int len;

	len = _strlen(s);
	new = malloc(sizeof(char) * (len + 1));
	saved = new; /* saving the new string before adding the content of *s */

	if (new == NULL)
	{
		return (NULL);
	}

	while (*s != '\0')
	{
		*new = *s;
		new++;
		s++;
	}
	*new = '\0';
	return (saved);
}


/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 *
 * @head: a pointer to pointer that points to the first node
 * @str: the linked list
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = _strdup(str);
	if (new->str == NULL)
	{
		return (NULL);
	}

	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
