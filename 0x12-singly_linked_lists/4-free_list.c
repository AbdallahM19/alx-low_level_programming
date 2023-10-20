#include "lists.h"

/**
 * free_list - Write a function that frees a list_t list.
 * @head: list_t
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node;
	list_t *cur;

	if (!head)
		return (0);
	node = head;
	while (head)
	{
		cur = node->next;
		free(node->str);
		free(node);
		node = cur;
	}
}
