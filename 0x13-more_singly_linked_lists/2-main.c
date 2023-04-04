#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;

	head = NULL;
	add_nodeint(&head, 0);
	add_nodeint(&head, 1);
	add_nodeint(&head, 2);
	add_nodeint(&head, 3);
	add_nodeint(&head, 4);
	add_nodeint(&head, 98);
	add_nodeint(&head, 402);
	add_nodeint(&head, 1024);
	print_listint(head);
	listint_t *curr_node = head;

	while (curr_node != NULL)
	{
		printf("%d ", curr_node->data);
		curr_node = curr_node->next;
	}
	return (0);
}
