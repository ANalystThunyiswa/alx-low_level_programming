#include "lists.h"

/**
 * listint_len - returns the number of nodes in the list
 *
 * @h: pointer to the list to print
 * Return: node count in list
 */

size_t listint_len(const listint_t *h)
{
	size_t node_count;

	for ((node_count = 0); h; node_count++)
	{
		h = h->next;
	}
	return (node_count);
}
