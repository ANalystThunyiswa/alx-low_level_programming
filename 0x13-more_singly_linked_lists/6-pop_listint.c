#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of the listit_t lists
 * and returns its data (n)
 * @head: head pointer of the list struct
 *
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *node, *temp;

	if (head == NULL)
	{
		return (0);
	}
	temp = node = *head;
	if (*head)
	{
		n = node->n;
		*head = node->next;
		free(temp);
	}
	else
	{
		n = 0;
	}
	return (n);
}
