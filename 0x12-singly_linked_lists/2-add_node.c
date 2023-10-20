#include "lists.h"

/**
 * add_node - Write a function that adds a new node =
 * at the beginning of a list_t list.
 * @head: list_t
 * @str: char
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	list_t *wen;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		wen = *head;
		while (wen->next)
		{
			wen = wen->next;
		}
		wen->next = new;
	}
	return (new);
}
