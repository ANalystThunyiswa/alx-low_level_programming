#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of the listint_t list
 *
 * @h: pointer to the list to print
 * Return: the number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
