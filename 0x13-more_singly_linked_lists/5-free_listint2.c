#include "lists.h"

/**
 * free_listint2 - Write a function that frees a listint_t list.
 * @head: a pointer to a pointer the head
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return (0);
	while (*head != NULL)
	{
		node = *head;
		*head = node->next;
		free(node);
	}
}
