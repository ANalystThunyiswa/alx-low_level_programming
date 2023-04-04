#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of the list
 *
 * @h: pointer to the pointer of the node head
 * Return: a pointer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->data = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
