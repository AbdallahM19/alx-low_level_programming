#include "lists.h"

/**
 * delete_dnodeint_at_index_main - Deletes the node at index of a list.
 * @head: Pointer
 * @index: Index
 * Return: 1 if succeeded
 *		-1 if failed.
 */
int delete_dnodeint_at_index_main(dlistint_t **head, unsigned int index)
{
	if (*head == NULL)
		return (-1);
	return (delete_dnodeint_at_index(head, index));
}

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
 * @head: Pointer
 * @index: Index
 * Return: 1 if succeeded
 *		-1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = get_dnodeint_at_index(*head, index);

	if (*head == NULL || current == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	if (current->next != NULL)
		current->next->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = current->next;
	free(current);
	return (1);
}

/**
 * get_dnodeint_at_index - Retrieves the node at index of a dlistint_t list.
 * @head: Pointer
 * @index: Index
 * Return: The node at the specified index
 *			or NULL if it does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}
	return (current);
}
