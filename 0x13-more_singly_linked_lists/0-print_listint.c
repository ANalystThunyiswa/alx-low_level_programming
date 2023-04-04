#include "lists.h"

/**
 * print_listint - prints all elements of the list
 *
 * @h: pointer to the list to print
 * Return: the number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}

	return (node_count);
}
