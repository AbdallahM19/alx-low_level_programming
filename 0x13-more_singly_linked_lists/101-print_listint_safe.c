#include "lists.h"

/**
 * print_listint_safe - Write a function that prints
 * a listint_t linked list.
 * @head: pointer the head
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num;
	const listint_t *node = head, *prev_node = NULL;

	for (num = 0; node != NULL; num++)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		if (node->next == prev_node)
		{
			printf("-> [%p] %d\n", (void *)node->next, node->next->n);
			break;
		}
		prev_node = node;
		node = node->next;
	}
	if (node == NULL)
		printf("-> [NULL] %d\n", node->n);
	return (num);
}
