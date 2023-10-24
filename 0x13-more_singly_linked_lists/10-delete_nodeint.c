#include "lists.h"

/**
 * delete_nodeint_at_index - Write a function that deletes the
 * node at index index of a listint_t linked list.
 * @head: pointer the head
 * @index: is the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *prev_node;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}
	while (i < index)
	{
		if (node == NULL)
			return (-1);
		prev_node = node;
		node = node->next;
		i++;
	}
	prev_node->next = node->next;
	free(node);
	return (1);
}
