#include "lists.h"

/**
 * pop_listint - Write a function that deletes the head node of
 * a listint_t linked list and returns the head node’s data (n).
 * @head: a pointer to a pointer the head
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *node;

	if (head && *head)
	{
		node = *head;
		i = node->n;
		*head = (*head)->next;
		free(node);
	}
	return (i);
}
