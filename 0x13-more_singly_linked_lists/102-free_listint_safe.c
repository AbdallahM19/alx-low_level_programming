#include "lists.h"

/**
 * free_listint_safe - Write a function that frees a listint_t list.
 * @h: pointer the head
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *current, *temp;

	if (!h || !*h)
		return (0);
	current = *h;
	while (current)
	{
		len++;
		temp = current->next;
		free(current);
		if (temp >= current)
		{
			*h = NULL;
			return (len);
		}
		current = temp;
	}
	*h = NULL;
	return (len);
}
