#include "lists.h"

/**
 * get_nodeint_at_index - Write a function that returns the nth
 * node of a listint_t linked list.
 * @head: Pointer the head
 * @index: index
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;

	while (head)
	{
		if (num == index)
			return (head);
		head = head->next;
		num++;
	}
	return (NULL);
}
