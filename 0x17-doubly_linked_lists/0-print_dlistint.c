#include "lists.h"

/**
 * dlistint_len - returns the number in a doubly linked list
 * @h: pointer
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
