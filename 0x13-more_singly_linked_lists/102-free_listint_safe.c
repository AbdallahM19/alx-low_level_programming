#include "lists.h"

/**
 * free_listint_safe - Write a function that frees a listint_t list.
 * @h: pointer the head
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *node, *hare;

	if (!h || !*h)
		return (0);
	node = *h;
	while (node)
	{
		len++;
		hare = node->next;
		free(node);
		if (hare >= node)
		{
			*h = NULL;
			return (len);
		}
		node = hare;
	}
	*h = NULL;
	return (len);
}
