#include "lists.h"

/**
 * free_list - Write a function that frees a list_t list.
 * @head: list_t
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node;

	if (!head)
		return (0);
	else
	{
		while (head)
		{
			node = head->next;
			free(head);
			head = node;
		}
	}
}
