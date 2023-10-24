#include "lists.h"

/**
 * reverse_listint - Write a function that reverses
 * a listint_t linked list.
 * @head: pointer the head
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = *head, *prev_node = NULL, *next_node = NULL;

	while (node)
	{
		next_node = node->next;
		node->next = prev_node;
		prev_node = node;
		node = next_node;
	}
	*head = prev_node;
	return (*head);
}
