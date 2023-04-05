#include "lists.h"
#include <stdlib.h>

/**
 * free_listsint2 - frees the listint_t list
 * @head: pointer to pointer to the listint_t struct
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *temp;

	/*if (head == NULL)
	{
		return;
	}*/
	node = *head;
	while (node != NULL)
	{
		/*temp = node;*/
		temp = node->next;
		free(node);
		node = temp;
	}
	*head = NULL;
}
