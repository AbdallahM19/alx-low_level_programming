#include "lists.h"

/**
 * print_listint_safe - Write a function that prints
 * a listint_t linked list.
 * @head: pointer the head
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *node = head;

	while (node != NULL)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		node = node->next;
		num++;
	}
	if (head != NULL && node == NULL)
		printf("-> [%p] %d\n", (void *)head, head->n);
	return (num);
}
