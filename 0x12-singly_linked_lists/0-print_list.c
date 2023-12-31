#include "lists.h"

/**
 * print_list - Write a function that prints
 * all the elements of a list_t list.
 * @h: pointer
 * Return: size of len
*/
size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		a++;
	}
	return (a);
}
