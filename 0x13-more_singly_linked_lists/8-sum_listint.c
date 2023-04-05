#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n) of a listint_t list
 *
 * @head: pointer to the list struct
 * Return: 0 on empty list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (head)
	{
		sum = sum + head->n;
	}
	head = head->next;
	}
	return (sum);
}
