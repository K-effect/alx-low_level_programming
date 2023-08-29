#include "lists.h"
/**
 * pop_listint - deletes the head node of a list and returns its data
 * @head: the head node of the input list
 * 
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int sec;

	if (*head == NULL)
		return (0);
	temp = *head;
	sec = temp->n;
	*head = temp->next;
	free(temp);
	return (sec);
}
