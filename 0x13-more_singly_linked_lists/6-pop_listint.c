#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a list and returns its data
 * @head: the head node of the input list
 * 
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int res;
	listint_t *c;
	listint_t *temp;

	if (head == NULL)
		return (0);
	
	c= *head;
	temp = c;
	if (*head)
	{
		res = c->n;
		*head = c->next;
		free(temp);
	}
	else
		res = 0;
	return (res);
}
