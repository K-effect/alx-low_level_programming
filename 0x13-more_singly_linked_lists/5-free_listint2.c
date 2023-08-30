#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a list, sets the @head to NULL
 * @head: double pointer input
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *c;
	listint_t *temp;

	if (head == NULL)
		return;

	c = *head;
	while (c)
	{
		temp = c;
		c = c->next;
		free(temp);
	}

	*head = NULL;
}
