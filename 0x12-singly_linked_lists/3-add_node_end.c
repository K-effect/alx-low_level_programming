#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
  * add_node_end - add new nodes to the end of the list
  * @head: current place in the list
  * @str: string to add to the head
  *
  * Return: pointer to current position in list
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	char *dupstr;
	int len = 0;

	if (str == NULL)
		return (NULL);
		
	while (str[len])
		len++;
	dupstr = str;
	if (dupstr == NULL)
		return (NULL);
		
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = dupstr;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (*head);
}
