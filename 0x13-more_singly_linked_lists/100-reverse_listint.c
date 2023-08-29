#include "lists.h"
/**
  * reverse_listint - reverses a listint_t linked list
  * @head: linked list
  *
  * Return: a pointer to the first node of the reversed list 
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *i;
	listint_t *j;

	if (head == NULL || *head == NULL)
		return (NULL);
	j = NULL;
	while ((*head)->next != NULL)
	{
		i = (*head)->next;
		(*head)->next = j;
		j = *head;
		*head = i;
	}
	(*head)->next = j;

	return (*head);
}
