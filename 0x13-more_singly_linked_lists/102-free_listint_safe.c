#include "lists.h"

/**
 * free_listint_safe - Write a function that frees a listint_t list.
 * @h: pointer the head
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *node;

	while (*h != NULL)
	{
		node = (*h)->next;
		free(*h);
		*h = node;
		count++;
	}
	*h = NULL;
	return (count);
}
