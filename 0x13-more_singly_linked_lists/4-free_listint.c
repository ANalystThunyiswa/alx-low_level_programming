#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees the listint_t list
 *@head: pointer to listint_t struct
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
