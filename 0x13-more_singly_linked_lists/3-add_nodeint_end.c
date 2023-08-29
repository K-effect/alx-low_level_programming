#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - adds new nodes to the end of the list
  * @head: current place in the list
  * @n: int to be added
  *
  * Return: current to  position in list
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
		
	new->n = n;
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
