#include "lists.h"

/**
 * print_listint_safe - Write a function that prints
 * a listint_t linked list.
 * @head: pointer the head
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *prev = NULL;
	size_t node_count = 0;
	int loop_detected = 0;

	while (current != NULL)
	{
		node_count++;
		printf("[%p] %d\n", (void *)current, current->n);
		if (current->next == prev)
		{
			loop_detected = 1;
			break;
		}
		prev = current;
		current = current->next;
	}
	if (loop_detected)
	{
		fprintf(stderr, "Loop detected in the list\n");
		exit(98);
	}
	return (node_count);
}
