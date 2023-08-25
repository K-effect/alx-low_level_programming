#include "lists.h"
#include <stdlib.h>
/**
  * add_node - add new nodes to the list
  * @head: place in the list
  * @str: string input
  *
  * Return: pointer
  */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	char *content;
	list_t *new;
	
	while (str[len])
		len++;
	content = malloc((len + 1) * sizeof(char));
	if (content == NULL)
		return (NULL);
		
	if (str == NULL || head == NULL)
		return (NULL);
		
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(content);
		return (NULL);
	}
	
	content = str;
	new->str = content;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
