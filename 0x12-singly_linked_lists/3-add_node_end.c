#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_node_end - adds a node to the end of a list_t list
  * @head: pointer to pointer to head of list_t
  * @str: string to be put in new node
  * Return: list_t node object
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
