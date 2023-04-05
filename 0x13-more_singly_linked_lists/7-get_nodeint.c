#include "lists.h"

/**
 * get_nodeint_at_index -  gets the nth node of the list
 * @head: pointer to head of struct
 * @index: index of node
 * Return: pointer to the nth node or NULL if not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	/*if (head == null)
	{
		return (NULL);
	}*/
	while (n < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		n++;
	}
	return (head);
}
