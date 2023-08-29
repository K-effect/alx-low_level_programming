#include "lists.h"
#include <stdlib.h>
/**
  * free_listint - defines a function
  * @head: argument
  *
  * Return: void
  */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
		
	free_listint(head->next);
	free(head);
}
