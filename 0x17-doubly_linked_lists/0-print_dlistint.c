#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: pointer
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint *h)
{
	for (size_t i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
