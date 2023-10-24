#include "lists.h"

/**
 * insert_nodeint_at_index - Write a function that inserts
 * a new node at a given position.
 * @head: pointer the head
 * @idx: is the index of the list where the new node should be added
 * @n: the num
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	node = *head;
	while (i < idx - 1)
	{
		if (node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		node = node->next;
		i++;
	}
	if (node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = node->next;
	node->next = new_node;
	return (new_node);
}
