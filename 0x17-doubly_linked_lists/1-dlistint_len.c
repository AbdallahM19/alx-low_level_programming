#include "lists.h"

/**
 * dlistint_len - returns the number in a doubly list
 * @h: pointer
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	for (size_t i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
