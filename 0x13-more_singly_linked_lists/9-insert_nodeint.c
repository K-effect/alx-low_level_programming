#include "lists.h"
#include <stdlib.h>
/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: head of the input list
  * @index: location to insert node
  * @n: value of inserted node
  *
  * Return: pointer
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *c;
	listint_t *res;

	c = *head;
	res = malloc(sizeof(listint_t));
	if (res == NULL)
		return (NULL);
	res->n = n;
	if (index == 0)
	{
		res->next = c;
		*head = res;
		return (*head);
	}
	while (index > 1)
	{
		c = c->next;
		index--;
		if (!c)
		{
			free(res);
			return (NULL);
		}
	}
	res->next = c->next;
	c->next = res;
	return (res);
}
