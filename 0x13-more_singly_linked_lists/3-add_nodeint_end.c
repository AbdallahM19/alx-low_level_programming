#include "lists.h"

/**
 * add_nodeint_end - Write a function that adds
 * a new node at the end of a listint_t list.
 * @head: pointer the head
 * @n: int const
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *n_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next = NULL;
	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}
	node = *head;
	while (node->next != NULL)
		node = node->next;
	node->next = n_node;
	return (n_node);
}
