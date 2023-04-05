#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint_end - adds a new node at the end of the list
 * @n: an integer data to add to the list
 * @h: pointer to the listint_t struct
 * Return: a pointer to current position in list or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	return (new_node);
}
