#include "lists.h"

/**
 * free_listint_safe - Write a function that frees a listint_t list.
 * @h: pointer the head
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *node;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		node = (*h)->next;
		free(*h);
		*h = node;
		len++;
		if (*h == *h->next)
		{
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
