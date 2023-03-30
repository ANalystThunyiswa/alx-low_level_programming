#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_node_end - adds a node to the end of a list_t list
  * @head: double pointer to head of list_t
  * @str: string to be put in new node
  * Return: list_t node object
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	unsigned int len;

	if (!head || !str)
		return (NULL);
	
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	for (len = 0; str[len]; len++)
	{}
	new->len = len;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next)
	{
		last = last->next;
	}
	last->next = new;

	return (new);
}
