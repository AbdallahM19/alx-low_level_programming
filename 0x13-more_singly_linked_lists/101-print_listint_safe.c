#include "lists.h"

/**
 * print_listint_safe - Write a function that prints
 * a listint_t linked list.
 * @head: pointer the head
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node, *hare;
	size_t num = 0;

	node = head;
	hare = head;
	while (node != NULL && hare != NULL && hare->next != NULL)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		node = node->next;
		hare = hare->next->next;
		num++;
		if (node == hare)
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			exit(98);
		}
	}
	return (num);
}
