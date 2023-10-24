#include "lists.h"

/**
 * looped_listint_len - Counts the number of unique nodes in
 * a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0. Otherwise
 * the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *node, *node1;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	node = head->next;
	node1 = (head->next)->next;

	while (node1)
	{
		if (node == node1)
		{
			node = head;
			while (node != node1)
			{
				nodes++;
				node = node->next;
				node1 = node1->next;
			}
			node = node->next;
			while (node != node1)
			{
				nodes++;
				node = node->next;
			}
			return (nodes);
		}
		node = node->next;
		node1 = (node1->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Write a function that prints
 * a listint_t linked list.
 * @head: pointer the head
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			nodes++;
		}
	}
	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
