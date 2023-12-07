#include "lists.h"

/**
 * add_dnodeint - adds a new node of a doubly list
 * @head: double pointer
 * @n: data to insert in the new node
 * Return: the address of the new element
 * 		or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
