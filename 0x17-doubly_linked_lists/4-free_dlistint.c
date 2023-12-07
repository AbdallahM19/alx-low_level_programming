#include "lists.h"

/**
 * free_dlistint - frees a doubly list
 * @head: pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tab;

	while (head)
	{
		tab = head->next;
		head = tab;
		free(head);
	}
}
